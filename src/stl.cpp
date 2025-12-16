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


    return 0;
}
