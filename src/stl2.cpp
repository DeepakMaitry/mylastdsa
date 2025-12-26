#include<bits/stdc++.h>
using namespace std;

int main() {
    // lists in stl 

    // list kuch nhi hai linked list ka hi sort form hai 
    // ye double linked list hota hai

    // structure
    // list <datatype> name_of_list;

    list <int> l;
    // basic operations 
    // push back
    // push front
    
    l.push_back(30);
    l.push_back(50);
    l.push_front(20);

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

    for(auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }

    // what is l.end() ?
    // l.end() is not the last element of the list
    // it is the next element of the last element

    
    


    return 0;
}