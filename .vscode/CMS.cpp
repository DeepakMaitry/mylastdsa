#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <limits>

class Customer {
public:
    std::string id;
    std::string name;
    std::string address;
    std::string phone;
    std::string email;

    Customer() = default;

    Customer(const std::string& id_,
             const std::string& name_,
             const std::string& address_,
             const std::string& phone_,
             const std::string& email_)
        : id(id_), name(name_), address(address_), phone(phone_), email(email_) {}

    // Serialize to a single line for file storage
    std::string toString(char sep = '|') const {
        return id + sep + name + sep + address + sep + phone + sep + email;
    }

    // Deserialize from a single line
    static bool fromString(const std::string& line, Customer& c, char sep = '|') {
        std::stringstream ss(line);
        std::string part;
        std::vector<std::string> parts;

        while (std::getline(ss, part, sep)) {
            parts.push_back(part);
        }

        if (parts.size() != 5) {
            return false;
        }

        c.id = parts[0];
        c.name = parts[1];
        c.address = parts[2];
        c.phone = parts[3];
        c.email = parts[4];
        return true;
    }
};

class CustomerManagementSystem {
private:
    std::vector<Customer> customers;
    std::string dataFile;
    const char SEP = '|';

    void loadCustomersFromFile() {
        customers.clear();
        std::ifstream in(dataFile);
        if (!in) {
            // File does not exist yet, start with empty DB
            return;
        }

        std::string line;
        while (std::getline(in, line)) {
            if (line.empty()) continue;
            Customer c;
            if (Customer::fromString(line, c, SEP)) {
                customers.push_back(c);
            }
        }
    }

    void saveCustomersToFile() {
        std::ofstream out(dataFile, std::ios::trunc);
        if (!out) {
            std::cerr << "Error: Unable to open file for writing: " << dataFile << "\n";
            return;
        }
        for (const auto& c : customers) {
            out << c.toString(SEP) << "\n";
        }
    }

    // Helper to clear input buffer
    void clearInputBuffer() {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Find index of customer by ID
    int findCustomerIndexById(const std::string& id) const {
        for (size_t i = 0; i < customers.size(); ++i) {
            if (customers[i].id == id) {
                return static_cast<int>(i);
            }
        }
        return -1;
    }

public:
    CustomerManagementSystem(const std::string& filename)
        : dataFile(filename) {
        loadCustomersFromFile();
    }

    void addCustomer() {
        std::string id, name, address, phone, email;

        std::cout << "\n--- Add New Customer ---\n";
        std::cout << "Enter customer ID: ";
        std::cin >> id;
        clearInputBuffer();

        if (findCustomerIndexById(id) != -1) {
            std::cout << "Customer with this ID already exists.\n";
            return;
        }

        std::cout << "Enter name: ";
        std::getline(std::cin, name);

        std::cout << "Enter address: ";
        std::getline(std::cin, address);

        std::cout << "Enter phone: ";
        std::getline(std::cin, phone);

        std::cout << "Enter email: ";
        std::getline(std::cin, email);

        customers.emplace_back(id, name, address, phone, email);
        saveCustomersToFile();
        std::cout << "Customer added successfully.\n";
    }

    void viewCustomers() {
        std::cout << "\n--- Customer List ---\n";
        if (customers.empty()) {
            std::cout << "No customers found.\n";
            return;
        }

        std::cout << "ID\tName\tPhone\tEmail\n";
        std::cout << "---------------------------------------------\n";
        for (const auto& c : customers) {
            std::cout << c.id << "\t"
                      << c.name << "\t"
                      << c.phone << "\t"
                      << c.email << "\n";
        }
    }

    void searchCustomer() {
        std::cout << "\n--- Search Customer ---\n";
        std::cout << "Search by:\n";
        std::cout << "1. ID\n";
        std::cout << "2. Name\n";
        std::cout << "Enter choice: ";
        int choice;
        std::cin >> choice;
        clearInputBuffer();

        if (choice == 1) {
            std::string id;
            std::cout << "Enter ID: ";
            std::cin >> id;
            clearInputBuffer();

            int idx = findCustomerIndexById(id);
            if (idx == -1) {
                std::cout << "Customer not found.\n";
            } else {
                const auto& c = customers[idx];
                std::cout << "Customer found:\n";
                std::cout << "ID: " << c.id << "\n";
                std::cout << "Name: " << c.name << "\n";
                std::cout << "Address: " << c.address << "\n";
                std::cout << "Phone: " << c.phone << "\n";
                std::cout << "Email: " << c.email << "\n";
            }
        } else if (choice == 2) {
            std::string name;
            std::cout << "Enter (part of) name: ";
            std::getline(std::cin, name);

            bool found = false;
            for (const auto& c : customers) {
                if (c.name.find(name) != std::string::npos) {
                    if (!found) {
                        std::cout << "Matching customers:\n";
                    }
                    found = true;
                    std::cout << "-------------------------\n";
                    std::cout << "ID: " << c.id << "\n";
                    std::cout << "Name: " << c.name << "\n";
                    std::cout << "Address: " << c.address << "\n";
                    std::cout << "Phone: " << c.phone << "\n";
                    std::cout << "Email: " << c.email << "\n";
                }
            }

            if (!found) {
                std::cout << "No customers matched your search.\n";
            }
        } else {
            std::cout << "Invalid choice.\n";
        }
    }

    void editCustomer() {
        std::cout << "\n--- Edit Customer ---\n";
        std::string id;
        std::cout << "Enter customer ID to edit: ";
        std::cin >> id;
        clearInputBuffer();

        int idx = findCustomerIndexById(id);
        if (idx == -1) {
            std::cout << "Customer not found.\n";
            return;
        }

        auto& c = customers[idx];
        std::cout << "Editing customer: " << c.name << " (ID: " << c.id << ")\n";

        std::string input;

        std::cout << "Enter new name (leave empty to keep '" << c.name << "'): ";
        std::getline(std::cin, input);
        if (!input.empty()) c.name = input;

        std::cout << "Enter new address (leave empty to keep '" << c.address << "'): ";
        std::getline(std::cin, input);
        if (!input.empty()) c.address = input;

        std::cout << "Enter new phone (leave empty to keep '" << c.phone << "'): ";
        std::getline(std::cin, input);
        if (!input.empty()) c.phone = input;

        std::cout << "Enter new email (leave empty to keep '" << c.email << "'): ";
        std::getline(std::cin, input);
        if (!input.empty()) c.email = input;

        saveCustomersToFile();
        std::cout << "Customer updated successfully.\n";
    }

    void deleteCustomer() {
        std::cout << "\n--- Delete Customer ---\n";
        std::string id;
        std::cout << "Enter customer ID to delete: ";
        std::cin >> id;
        clearInputBuffer();

        int idx = findCustomerIndexById(id);
        if (idx == -1) {
            std::cout << "Customer not found.\n";
            return;
        }

        std::cout << "Are you sure you want to delete customer '"
                  << customers[idx].name << "' (ID: " << customers[idx].id << ")? (y/n): ";
        char confirm;
        std::cin >> confirm;
        clearInputBuffer();

        if (confirm == 'y' || confirm == 'Y') {
            customers.erase(customers.begin() + idx);
            saveCustomersToFile();
            std::cout << "Customer deleted.\n";
        } else {
            std::cout << "Delete cancelled.\n";
        }
    }

    void run() {
        while (true) {
            std::cout << "\n=== Customer Management System ===\n";
            std::cout << "1. Add Customer\n";
            std::cout << "2. View All Customers\n";
            std::cout << "3. Search Customer\n";
            std::cout << "4. Edit Customer\n";
            std::cout << "5. Delete Customer\n";
            std::cout << "0. Exit\n";
            std::cout << "Enter your choice: ";

            int choice;
            std::cin >> choice;

            if (!std::cin) {
                // Handle invalid input (non-integer)
                std::cin.clear();
                clearInputBuffer();
                std::cout << "Invalid input. Please enter a number.\n";
                continue;
            }

            clearInputBuffer();

            switch (choice) {
            case 1:
                addCustomer();
                break;
            case 2:
                viewCustomers();
                break;
            case 3:
                searchCustomer();
                break;
            case 4:
                editCustomer();
                break;
            case 5:
                deleteCustomer();
                break;
            case 0:
                std::cout << "Exiting...\n";
                return;
            default:
                std::cout << "Invalid choice. Try again.\n";
            }
        }
    }
};

int main() {
    CustomerManagementSystem cms("customers.txt");
    cms.run();
    return 0;
}
