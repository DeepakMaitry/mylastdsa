#include <bits/stdc++.h>
using namespace std;

int main() {

    // maps in stl 

    // it is container that stores elements in key value pair
    // it is implemented using self balancing binary search tree (like red black tree)
    // keys are always sorted in ascending order
    // key must be unique
    // value can be duplicate
    // time complexity of insertion, deletion and searching is O(log n)
    // internally uses nodes to store elements
    // each node contains key, value, pointer to left child, pointer to right child and pointer to parent node
    // avl tree is also used to implement maps in some stl implementations

    /*
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "efg";
    m[2] = "hij";
    m[4] = "klm";
    
    // iterating over map
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    */

    /*
    // map create 
    map <int,int> m;
    // m[1] = 2;  // insert kar sakte ho value ko, is method se value update bhi hojata hai 
    
    // m.insert({1,2});
    // m.insert(pair<int,int>(1,2));
    m.insert(make_pair(1,22));
    m.insert(make_pair(2,23));
    m.insert(make_pair(3,24));
    m.insert(make_pair(3,241)); // will not be inserted as key 3 is already present
    m.insert(make_pair(4,21));
    m.insert(make_pair(5,26));
    m[5] = 100; // will update the value of key 5 to 100
    // accessing elements
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    cout << "Size of map: " << m.size() << endl;
    // searching
    int key = 3;
    if(m.find(key) != m.end()){
        cout << "Key " << key << " found with value " << m[key] << endl;
    } else {
        cout << "Key " << key << " not found" << endl;
    }
    // deletion
    m.erase(2); // erase key 2
    cout << "After deletion:" << endl;
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    
    cout << m[200] << endl; // will insert key 200 with value 0
    cout << "Size of map: " << m.size() << endl;
    
    cout << endl;
    if(m.count(100)){
        cout << "Key 100 is present" << endl;
    } else {
        cout << "Key 100 is not present" << endl;
    }
    */

    // multimap in stl
    // it is similar to map but it allows duplicate keys


    /*
    multimap <int,int> m;
    m.insert(make_pair(1,22));
    m.insert(make_pair(2,23));
    m.insert(make_pair(3,24));
    m.insert(make_pair(3,241)); // will be inserted as key 3 is duplicate
    m.insert(make_pair(4,21));
    m.insert(make_pair(5,26));
    
    // m[5] = 100; // this will give error as multimap does not support [] operator
    // confused? think about it, if multiple keys are present then which key's value will be updated?
    
    // accessing elements
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    */
    
    // *********** unordered map in stl ***********
    // it is similar to map but it does not store elements in sorted order
    // it is implemented using hash table
    // average time complexity of insertion, deletion and searching is O(1)
    // worst case time complexity is O(n)
    // internally uses buckets to store elements
    // each bucket contains a linked list of nodes to handle collisions
    // key must be unique
    // value can be duplicate
    // uses chaining to handle collisions
    // not implemented using tree structure

    /*
    unordered_map <int,int> m;
    m.insert(make_pair(1,22));
    m.insert(make_pair(2,23));
    m.insert(make_pair(3,24));
    m.insert(make_pair(3,241)); // will not be inserted as key 3 is already present
    m.insert(make_pair(4,21));
    m.insert(make_pair(5,26));
    m[5] = 100; // will update the value of key 5 to 100
    // accessing elements
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    
    // Note: The order of elements may vary as unordered_map does not store elements in any particular order
    */
    
    // *********** unordered multimap in stl ***********
    // it is similar to unordered_map but it allows duplicate keys
    // it is implemented using hash table
    // average time complexity of insertion, deletion and searching is O(1)
    // worst case time complexity is O(n)
    // internally uses buckets to store elements
    // each bucket contains a linked list of nodes to handle collisions
    // uses chaining to handle collisions
    // not implemented using tree structure
    // key can be duplicate
    // value can be duplicate
    // does not support [] operator
    

    unordered_multimap <int,int> m;
    m.insert(make_pair(1,22));
    m.insert(make_pair(2,23));
    m.insert(make_pair(3,24));
    m.insert(make_pair(3,241)); // will be inserted as key 3 is duplicate
    m.insert(make_pair(4,21));
    m.insert(make_pair(5,26));
    // m[5] = 100; // this will give error as unordered_multimap does not support [] operator
    // accessing elements
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    
    return 0;
}