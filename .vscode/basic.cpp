#include <bits/stdc++.h>    // This header file includes every standard library
using namespace std;

int main()
{

    // input and outputs 
    std::cout << "Hello World" << std::endl << " this is basic of cpp" << std::endl; // "\n" is used to insert a new line
   int a, b;
   cin >> a >> b;                               // 'cin' is used to take input from the user
   cout << "The sum of a and b is: " << a + b << endl;


   // data types in cpp
    int num = 10;                               // integer data type   
    float decimalNum = 5.5f;                    // floating point data type
    double largeDecimalNum = 9.99;              // double precision floating point data type
    char character = 'A';                       // character data type
    bool isTrue = true;                         // boolean data type
    string text = "Hello, C++20!";              // string data type

    unsigned short int shortInt = 5;            // short integer data type
    long long int longInt = 1234567890LL;      // long long integer data type
    unsigned long long int ulongInt = 1234567890ULL; // unsigned long long integer data type
    wchar_t wideChar = L'W';                    // wide character data type
    unsigned short num1 = 65535;               // unsigned short integer
    auto autoVar = 42;                          // automatic type deduction
    decltype(num) anotherInt = 20;              // type deduction using decltype
    long numLarge = 100000L;                     // long integer data type
    unsigned long ulongNum = 100000UL;              // unsigned long integer data type
    unsigned long long ullNum = 10000000000ULL; // unsigned long long integer
    


    long double preciseDecimal = 3.14159265358979323846L; // long double data type for higher precision floating point numbers *************
    long long llNum = 10000000000LL;            // long long integer data type use this for large integers*******

    cout << "Integer: " << num << endl;
    cout << "Float: " << decimalNum << endl;    
    cout << "Double: " << largeDecimalNum << endl;
    cout << "Character: " << character << endl;
    cout << "Boolean: " << isTrue << endl;
    cout << "String: " << text << endl;

    // to include space in string use getline normal cin will not work
    string fullLine;
    cout << "Enter a full line of text: ";
    cin.ignore(); // to ignore the newline character left in the input buffer
    getline(cin, fullLine);
    cout << "You entered: " << fullLine << endl;


    // if else in cpp
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    /*
    this is multiline comment
    */

    // logical operators in cpp
    bool x = true;
    bool y = false;
    cout << "x AND y: " << (x && y) << endl; // Logical AND
    cout << "x OR y: " << (x || y) << endl;
    cout << "NOT x: " << (!x) << endl;        // Logical NOT

    // switch case in cpp
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
    }


    // arrays in cpp
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }

    // array must have similar data types and fixed size 

    // array are stored in contiguous memory locations

    // 2d arrays in cpp
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};  // first is row second is column
    cout << "\n2D Array elements:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // size of string in cpp
    string sample = "Hello, World!";
    cout << "Size of string: " << sample.size() << endl;
    cout << "Length of string: " << sample.length() << endl;
    // for both size() and length() the output will be same
    // both functions return the number of characters in the string
    // they are interchangeable
    // size() is more commonly used with containers like vectors, while length() is often used with strings


    //for last index of array use size-1 because index starts from 0
    
    string name = "Deepak";
    int len = name.size();
    cout << "Last character of name: " << name[len - 1] << endl;

    // you can also use back() function to get last character of string
    cout << "Last character using back(): " << name.back() << endl;

    // you can also use front() function to get first character of string
    cout << "First character using front(): " << name.front() << endl;

    // you can also use at() function to get character at specific index
    cout << "Character at index 2 using at(): " << name.at(2) << endl;  

    // you can also use substring to get part of string
    cout << "Substring from index 1 to 3: " << name.substr(1, 3) << endl; // from index 1 take 3 characters

    // you can also find a character in string using find() function
    cout << "Index of character 'p': " << name.find('p') << endl; // returns index of first occurrence of 'p'


    // ******* you can change the character of string using index ********
    name[0] = 'd'; // changing first character to lowercase 'd' 
    cout << "Modified name: " << name << endl;


    // loops in cpp

    // this is for loop
    cout << "Looping through numbers 1 to 5 using for loop:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // this is while loop
    cout << "Looping through numbers 1 to 5 using while loop:" << endl;
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        ++i;
    }
    cout << endl;

    // this is do-while loop
    cout << "Looping through numbers 1 to 5 using do-while loop:" << endl;
    i = 1;
    do {
        cout << i << " ";
        ++i;
    } while (i <= 5);
    cout << endl;

    // functions in cpp

    // type of functions in cpp
    // void function
    // return function
    // parameterized function
    // non-parameterized function

    // **************function must be outside the main function

    /*
    void greet() {
        cout << "Hello from greet function!" << endl;
    }

    greet(); // calling void function
    */

    // ********** pass by value function *****************

    /*
    int add(int x, int y) {
        return x + y;
    }
    int sum = add(5, 10); // calling function
    cout << "Sum using function: " << sum << endl;
    */

    // ********** pass by reference function *****************
    /*
    void swap(int &a, int &b) {          // passing by reference using & rest wiill be same
        int temp = a;
        a = b;
        b = temp;
    }
    int num1 = 5, num2 = 10;
    swap(num1, num2); // calling function
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    */


    // maximum and minimum in cpp
    int p = 15, q = 25;
    cout << "Maximum of p and q: " << max(p, q) << endl;
    cout << "Minimum of p and q: " << min(p, q) << endl;    // uses header <algorithm>

    // absolute value in cpp
    int negativeNum = -50;
    cout << "Absolute value of negativeNum: " << abs(negativeNum) << endl;  // uses header <cstdlib> or <cmath>

    // power function in cpp
    double base = 2.0, exponent = 3.0;
    cout << "Power: " << pow(base, exponent) << endl;  // uses header <cmath>

    // square root function in cpp
    double numberSqrt = 16.0;
    cout << "Square root of numberSqrt: " << sqrt(numberSqrt) << endl;  // uses header <cmath>



    return 0;
}
