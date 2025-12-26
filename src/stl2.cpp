#include<bits/stdc++.h>
using namespace std;

int main() {
    // lists in stl 

    // list kuch nhi hai linked list ka hi sort form hai 
    // ye double linked list hota hai

    // structure
    // list <datatype> name_of_list;

    // list <int> l;
    // basic operations 
    // push back
    // push front
    
    // l.push_back(30);
    // l.push_back(50);
    // l.push_front(20);

    // cout << l.front() << endl; // 20
    // cout << l.back() << endl;  // 50

    // l.size(); // size of list
    // l.empty(); // check if list is empty or not
    // to remove elements
    // pop back
    // pop front

    // in generate we don't use list 

    // traversal
    /*
    for (int i : l) {
        cout << i << " ";
    }
    */

    // or using auto 

    // for(auto it = l.begin(); it != l.end(); it++) {
    //     cout << *it << " ";
    // }

    // auto actual me is type ka hai 
    // auto it = list<int> :: iterator it;

    // what is l.end() ?
    // l.end() is not the last element of the list
    // it is the next element of the last element

    // ab meko list ko reverse order me print karana hai 

    // for(auto it = l.rbegin(); it != l.rend(); it++) {
    //     cout << *it << " ";
    // }

    // it++  -> previous element or backward traversal ***********
    // it--  -> next element or forward traversal *************

    // rbegin() -> reverse begin
    // rend()   -> reverse end 

    // note <= is not allowed in iterator traversal becaseu l.end() is not the last element

    // list is completed next is set 

    // set is implemented using balanced binary search tree
    // it store elements in sorted order
    // it store only unique elements

    // structure 
    // set <datatype> name_of_set;

    // basic operations
    // insert
    // erase
    // find
    // size
    // empty
    // traversal
    // lower_bound
    // upper_bound
    // clear
    // count
    // swap
    // emplace
    // merge
    
    // log(n) time lagega search, insert, delete me set me 

    // red black tree use hota hai set me
    // what is red black tree ?
    // red black tree is a balanced binary search tree
    // isme har node ke sath ek color hota hai red or black
    // ye tree apne aap ko balance karta hai insertion or deletion ke baad bhi
    // jisse search time complexity O(log n) hi rahe
    // red black tree me kuch properties hoti hai
    // 1. har node red ya black hota hai
    // 2. root hamesha black hota hai
    // 3. har leaf (NIL) black hota hai
    // 4. agar ek node red hai to uske dono children black hone chahiye
    // 5. har node se uske descendant leaves tak ke paths me same number of black nodes hone chahiye
    // in properties ki wajah se red black tree apne aap ko balance karta hai
    // jisse search, insert, delete operations O(log n) time me ho jate hai
    // isliye set me ye operations efficient hote hai

    /*
    
    set <int> s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(5); // duplicate element will not be added
    
    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " "; // 2 5 8
    }
    */
    // we can sort in descending order using greater<int>
    // set <int, greater<int>> s;

    /*
    // finding an element 

    ***** find returns an iterator to the element if found, otherwise it returns s.end() ******

    set <int> :: iterator it = s.find(5);
    if(it != s.end()) {
        cout << "\nElement found: " << *it << endl;
    } else {
        cout << "\nElement not found" << endl;
    }
    */

    // seach the element using another method 

    // if(s.find(200) != s.end()) {
    //     cout << "Element found" << endl;
    // } else {
    //     cout << "Element not found" << endl;
    // }


    // store in descending order
/*
set <int, greater<int>> s;

s.insert(5);
s.insert(2);
s.insert(8);

for(auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " "; // 8 5 2
}
*/

// using count function
/*
set <int> s;
s.insert(5);
s.insert(10);
if(s.count(5)) {
    cout << "Element found" << endl;
} else {
    cout << "Element not found" << endl;
}
    or you can directly check like this
cout << s.count(10); // 1
cout << s.count(15); // 0
*/

// delete an element
/*
set <int> s;
s.insert(5);
s.insert(10);
s.insert(15);
s.erase(10); // removes 10 from the set
for(auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " "; // 5 15
}
*/

// this is outside of main function 

/*
class Person{
    public:
    int age;
    string name;
};
// kya mai class ko set ke andar store kar sakta hu?
// haan kar sakta hu lekin hame comparator function define karna padega

set <Person> s;
Person p1, p2, p3;
p1.age = 25, p1.name = "Alice";
p2.age = 22, p2.name = "Deepak";
p3.age = 20, p3.name = "Charlie";


bool operator < (const Person &other) const { // kis hisab se sort karna hai ye define karta hai
    return age < other.age; // sort by age      // reverse order ke liye > use karna like return age > other.age;
}


s.insert(p1); // error ayega kyuki comparator function define nahi hai

s.insert(p1);
s.insert(p2);
s.insert(p3);

for(auto it = s.begin(); it != s.end(); it++) {
    cout << it->name << " " << it->age << endl;  // cout << (*it).name << " " << (*it).age << endl;
}


*/


/*
// comparator function define karte hai
bool comparePersons(const Person &a, const Person &b) {
    return a.age < b.age; // sort by age
}
// ab set ko define karte hai comparator function ke sath
set <Person, decltype(&comparePersons)> s(comparePersons);
Person p1;
p1.age = 25;
p1.name = "Alice";
s.insert(p1); // ab ye kaam karega

printing the persons in the set
for(auto it = s.begin(); it != s.end(); it++) {
    cout << it->name << " " << it->age << endl;
}

// output:
Alice 25

*/

    return 0;
}