/*
#include <iostream>
#include <math.h>     // for mathematical functions
#include <vector>     // for std::vector
#include <string>     // for std::string
#include <algorithm>  // for std::sort, std::find, etc.
*/
#include <bits/stdc++.h> // for all standard libraries (not recommended for production code)

using namespace std;

// type of functions
// void function
/*
    void print() {
    cout << "Hello, World!" << endl;
    }
*/
// return type function
/*
int sum(int a, int b) {
    return a + b;
}
*/

// parameterized function
// non-parameterized function
// recursive function
// non-recursive function
// inline function
// lambda function

int main() {

    // print(); // calling void function
    /*
    int result = sum(5, 10); // calling return type function
    cout << "Sum: " << result << endl;
    */

    // C++ STL (Standard Template Library) example
    // it's divided into 4 components
    // 1. Algorithms
    // 2. Containers
    // 3. Iterators
    // 4. Functions

// before moving to containers we need to know about pairs
// pair is a container that holds two values of different data types
// syntax: pair<data_type1, data_type2> pair_name;

/*
    pair<int, string> p; // pair declaration
    p.first = 1;         // assigning value to first element
    p.second = "One";    // assigning value to second element
    cout << "Pair: " << p.first << ", " << p.second << endl;

    // or you can directly initialize a pair
    pair<int, string> q = {2, "Two"};
    cout << "Pair: " << q.first << ", " << q.second << endl;

    // pair inside pair (nested pair)
    pair<int, pair<string, float>> r = {3, {"Three", 3.14}};
    cout << "Nested Pair: " << r.first << ", " << r.second.first << ", " << r.second.second << endl;

    // pair array
    pair<int, string> arr[] = {{4, "Four"}, {5, "Five"}, {6, "Six"}};

    // printing single pair array elements
    cout << "Array Pair 1: " << arr[0].first << ", " << arr[0].second << endl;
    cout << "Array Pair 2: " << arr[1].first << ", " << arr[1].second << endl;
    cout << "Array Pair 3: " << arr[2].first << ", " << arr[2].second << endl;
    for (auto &elem : arr) {
        cout << "Array Pair: " << elem.first << ", " << elem.second << endl;
    } 

    // type of for loops 
    // 1. traditional for loop
    for (int i = 0; i < 5; i++) {
        cout << "Traditional For Loop: " << i << endl;
    }
    // 2. range-based for loop
    vector<int> vec = {10, 20, 30, 40, 50};
    for (auto &value : vec) {
        cout << "Range-based For Loop: " << value << endl;
    }

    // 3. iterator-based for loop
    for (auto it = vec.begin(); it != vec.end(); it++) {
        cout << "Iterator-based For Loop: " << *it << endl;
    }

    // 4. while loop
    int j = 0;
    while (j < 5) {
        cout << "While Loop: " << j << endl;
        j++;
    }

    // 5. do-while loop
    int k = 0;
    do {
        cout << "Do-While Loop: " << k << endl;
        k++;
    } while (k < 5);

 */
 // vectors in cpp 
 /*
 vector<int> vec; // vector declaration
 vec.push_back(1); // adding elements to vector
 vec.push_back(2);
 vec.push_back(3);
 vec.push_back(4);
 vec.push_back(5);
 
 for (auto &value : vec) {
    cout << "Vector: " << value << endl;
}

// string in C++
string str = "Hello, World!";
cout << "String: " << str << endl;

*/

    // starting rohit negi STL tutorial ********** above code is from striver stl tutorial **********

    /*
    //  pair jo data type ke 2 values ko store krta hai
    pair<int, string> p; // pair declaration
    // p is name of pair
    p.first = 1;         // assigning value to first element
    p.second = "One";    // assigning value to second element
    cout << "Pair: " << p.first << ", " << p.second << endl;
    // jodi me rahe ek sath 2 value ko store krta hai
    // pair is a container that holds two values of different data types
    
    // pair ke do methods hai 
    pair<string, int> person; //  = {"Deepak", 31};
    //  2 methods 
    person = make_pair("Deepak", 31); // method 1
    // person = {"Deepak", 31}; // method 2
    cout << "Name: " << person.first << ", Age: " << person.second << endl;
    */
    
    // 3. pair inside pair (nested pair)
    // name , age , weight
    // pair<string, pair<int,int>>p;
    // what is happening here ?
    // p is a pair
    // first element is string (name)
    // second element is also a pair (age, weight)
    // so to access age and weight we need to use second.first and second.second
    // example:
    /*
    p.first = "Deepak Maitry";
    p.second.first = 31;      // age
    p.second.second = 63;     // weight
    */
    
    // second method kisi value ko insert karane ka 

    // pair<string, pair<int,int>> q = {"Deepak Maitry", {31, 63}};

    // or using make_pair

    /*
    pair<string, pair<int,int>> r;
    r = make_pair("Deepak Maitry", make_pair(22, 63));
    cout << "Name: " << r.first << ", Age: " << r.second.first << ", Weight: " << r.second.second << endl;
    */
   /*
   pair<int, string> arr[] = {{1, "One"}, {2, "Two"}, {3, "Three"}};
   // printing single pair array elements
   cout << "Array Pair 1: " << arr[0].first << ", " << arr[0].second << endl;
   cout << "Array Pair 2: " << arr[1].first << ", " << arr[1].second << endl;
   cout << "Array Pair 3: " << arr[2].first << ", " << arr[2].second << endl;
   // printing all pair array elements using loop
    for (auto &elem : arr) {
        cout << "Array Pair: " << elem.first << ", " << elem.second << endl;
    }
    */

    // how auto works in for loop
    /*
    vector<int> vec = {10, 20, 30, 40, 50};
    for (auto &value : vec) {
        cout << "Vector Element: " << value << endl;
    }
    */

//    pair<string, pair<int, int>> p;
   
   // or also write this way 
   
   /*
   pair<pair<string,int>, int> p;
   p = make_pair(make_pair("Deepak", 31), 63);
   cout << "Name: " << p.first.first << ", Age: " << p.first.second << ", Weight: " << p.second << endl;
   */
   
    // you can make for many variables inside pair but it will be difficult to access them

    // whenever you code please enable the word wrap option in your code editor for better readability ***********

    // list of STL tutorial will be continued in next file stl2.cpp

    return 0;
}
