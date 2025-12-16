#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pattern printing in cpp

    /*
    pattern1:
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    */
    /*
    for(int i = 1; i <=5; i++) {

    for(int j = 1; j <= 5; j++) {
     cout << "* ";
        }
        cout << endl;
    }
 */

    /*
    pattern2:
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
    */
    /*
    
    for(int i = 1; i <=5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    */
   /*
   pattern3: 
   
    1 
    1 2 
    1 2 3 
    1 2 3 4 
    1 2 3 4 5
   */
    /*
    for(int i = 1; i <=5; i++) {
        int num = 1;
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    // or you can also do like this 
    for(int i = 1; i <=5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    */
    // pattern4:
    /*
    1 
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5
    */
    
   /*
    for(int i = 1; i <=5; i++) {
        for(int j = 1; j <=i; j++){
            cout << i << " ";
        }
        cout <<endl;

    }

    */

    // pattern5:
    /*
    * * * * * 
    * * * * 
    * * * 
    * * 
    * 
    
    */
    /*
    for(int i = 1; i <=5; i++) { 
        for(int j = 5; j >=i; j--){           // or you can do for(int j = i; j <=5; j++) or j=0; j<=(5-i+1); j++
            cout << "* ";
        }
        cout <<endl;
    }
    */
   // pattern6;
   /*
    1 2 3 4 5 
    1 2 3 4 
    1 2 3 
    1 2 
    1 
    */
    /*
    for(int i = 5; i >=1; i--) {         //or you can write  i = 1 ; i <=5; i++
    for(int j = 1; j <= i; j++) {     // or you can write j = 1; j <= (6 - i); j++
    cout << j << " ";
}
cout << endl;
}

*/

    // pattern7:
    /*
       *
      ***
     *****
     
     */
    /*
     for(int i = 1; i <=3; i++) {
        // print spaces 
        for(int j = i; j < 3; j++) {
            cout << " ";

        }
        // print stars
        for(int k = 1; k <= (2*i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    */
   // or you can do this way 
    /*
    int n = 5;
    for(int i =0; i<n; i++) {
        // space
        for(int j = 0; j<n-i-1;j++){
            cout << " ";
        }
        for(int j = 0; j< 2*i+1;j++){
            cout << "*";

        }
        cout << endl;
    }
    */  

    // pattern8:
/*
*****
 *** 
  * 
*/
/*
int n = 3;
for(int i = 1; i <= n; i++) {
    // print spaces 
    
    for(int k = 1 ; k <=i - 1; k++){
        cout << " ";
    }
    // print stars
    for(int j = 1; j<=2*(n-i) +1; j++){
        cout << "*";
    }
    // print spaces 
    for(int k = 1 ; k <=i - 1; k++){
        cout << " ";
    }
    cout << endl;
}
*/

    /*
    pattern 9: 
    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  *****  
   ***   
    *  
    */

    /*
    int n = 5;
    for(int i =1; i <=n; i++){
        // print spaces 
        for(int j = 1; j <=n-i; j++){
            cout << " ";
        }

        // print stars 
        for(int k = 1; k <=2*i -1; k++){
            cout << "*";
        }
        // print spaces
        for(int j = 1; j <=n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
    int m = 4;
    for(int x = 1; x <=m; x++){
        // print space
        for(int y = 1; y <=x; y++){
            cout << " ";
        }
        // print stars
        for(int z = 1; z <=2*(m - x) +1; z++){
            cout << "*";
        }
        // print spaces
        for(int y = 1; y <=x; y++){
            cout << " ";
        }
        cout << endl;
    }
    */
    // pattern 10:
    /*
*    
**   
***  
**** 
*****
**** 
***  
**   
*   
    */

   /*
   int n = 5;
   for(int i = 1; i <=n;i++){
       // print stars 
       for(int j = 1; j <=i; j++){
           cout << "*";
        }
        // print spaces
        for(int k = 1; k <=n-i; k++){
            cout << " ";
        }
        cout << endl;
    }
    int m = 4;
    for(int x = 1; x <=m; x++){
        // print stars 
        for(int y = 1; y <=m-x+1; y++){
            cout << "*";
        }
        // print spaces
        for(int z = 1; z <=x; z++){
            cout << " ";
        }
        cout << endl;
    }
    */

    // pattern 11:
    /*
1 
0 0 
1 1 1 
0 0 0 0 
1 1 1 1 1 
    */

    /*
    for(int i = 1; i <=5; i++) {
        for(int j = 1; j <=i; j++) {
            if(i%2 == 1) {
                cout << "1 ";
            }
            else {
                cout << "0 ";   
            }
        }
        cout << endl;
    }
    */
