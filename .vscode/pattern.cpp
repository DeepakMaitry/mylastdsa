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
    // pattern 12:
    /*
1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1 
    */

/*
for(int i = 1; i <=5; i++) {
    for(int j = 1; j <=i; j++) {
        if(j%2 == 1) {
            cout << "1 ";
            }
            else {
                cout << "0 ";   
            }
        }
        cout << endl;
    }
    */
   // pattern 13

   /*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/
   /*int start = 1;
   for(int i = 1; i <=5; i++) {
    if (i % 2 == 0) {
        start = 0;
    }
    else {
        start = 1;
    }
    for(int j = 1; j <=i; j++) {
            cout << start << " ";
            start = 1 - start;           // toggle between 1 and 0 or flip the value
        }
        cout << endl;
    }*/

    // pattern 14:
    /*
1      1
12    21
123  321
12344321
    */

    /*
    int n = 4;
    for(int i = 1; i <= n ; i++){
        
    // print num
    for(int j = 1; j <= i; j++){
        cout << j ;
        
    }
    // print spaces
    for(int k = 1; k <= 2*(n - i); k++){
        cout << " ";
    }
    // print num
    for(int j = i; j >= 1; j--){
        cout << j ;
    }
    cout << endl;
}
*/

    // pattern 15:
    /*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
    */
    /*
    int n = 5;
    int count = 1;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    */

    // pattern 16:
    /*
A 
A B 
A B C 
A B C D 
A B C D E 
    */

    /*
    for(int i = 1; i <= 5; i++) {  // or i = 0; i < 5; i++
        for(char ch = 'A'; ch <= 'A' + i-1; ch++) {   // remove -1 if i=0
            cout << ch << " ";
        }
        cout << endl;
    }
    */

    // pattern 17:
    /*
E 
E D 
E D C 
E D C B 
E D C B A 
    */

    /* 
    for(int i = 1; i <=5; i++) {
        for(char ch = 'E'; ch >= 'E' - i + 1; ch--) {
            cout << ch << " ";
        }
        cout << endl;
    }
    */

    // pattern 18:

    /*
A B C D E 
A B C D 
A B C 
A B 
A
    */

    /*
    for(int i = 1; i <=5; i++) {                     // if you want to do from E to A then for(int i = 0; i < 5; i++)
        for(char ch = 'A'; ch <= 'A' + 5 - i; ch++) {        // for(char ch = 'E'; ch >= 'A' + i; ch--) if you want to do from E to A
            cout << ch << " ";
        }
        cout << endl;
    }*/

    // pattern 19; 
    /*
A 
B B 
C C C 
D D D D 
E E E E E 
*/

    /*
    for(int i = 1; i <=5; i++) {
        for(int j = 1; j <= i; j++) {
            char ch = 'A' + i - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
    */

    // pattern 20:

    /*
    
    a
   aba 
  abcba
 abcdcba
abcdedcba
*/ 

    /*int n = 5;
    for(int i = 1; i <= n; i++) {
        // print spaces
        for(int j = i; j < n; j++) {
            cout << " ";
        }
        // print increasing part
        for(char ch = 'a'; ch < 'a' + i; ch++) {
            cout << ch;
        }
        // print decreasing part
        for(char ch = 'a' + i - 2; ch >= 'a'; ch--) {   // this is very important ch = 'a' + i - 2; ch>= 'a';ch--
            cout << ch;
        }
        cout << endl;
    }*/

    // or using breakpoint 

    // pattern 21:        // this is more important than previous one 
    /*
    int n = 5;
    for(int i = 0; i <n;i++){
        // print spaces 
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2*i + 1)/2;
        for(int j = 0; j < 2*i+1; j++){
            cout << ch;
            if(j < breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }

        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
*/

    // pattern 22:
    /*
    
E
ED
EDC
EDCB
EDCBA
*/

/*
int n = 5;
for(int i = 1; i <= n;i++){
    char ch = 'E';
    for(int j = 1; j<=i;j++){
        cout << ch;
        ch--;
    }
    cout <<endl;
}
*/

// pattern 23:
/*
E
DE
CDE
BCDE
ABCDE
*/

/*
int n = 5;
for(int i = 0; i < n; i++){
    char ch = 'E' - i;
    for(int j = 0; j <= i; j++){
        cout << ch;
        ch++;
    }   
    cout << endl;
}
*/

// pattern 24:
/*
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 


*/
/*
int n = 5;

for(int i = 1; i <= n; i++){
    // first part
    for(int j = 1; j <= n - i + 1; j++){
        cout << "* ";
    }
    // spaces
    for(int k = 1; k <= 2*(i - 1); k++){       // or you can use  space +=2
        cout << "  ";
    }
    // second part
    for(int j = 1; j <= n - i + 1; j++){
        cout << "* ";
    }
    cout << endl;
}
for(int i = n; i >= 1; i--){
    // first part
    for(int j = 1; j <= n - i + 1; j++){
        cout << "* ";
    }
    // spaces
    for(int k = 1; k <= 2*(i - 1); k++){
        cout << "  ";
    }
    // second part
    for(int j = 1; j <= n - i + 1; j++){
        cout << "* ";
    }
    cout << endl;
}
*/

// pattern 25:
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
    for(int i = 1; i <=2*n-1;i++) {
        int stars = i;
        if(i>n) stars = 2*n - i;
        for(int j = 1; j <=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
*/

/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
/*
int n = 5;
int spaces = 2*n -2;
for(int i =1; i<=2*n-1;i++){
    int stars = i;
    // adjust stars
    if(i>n) stars = 2*n - i;
    // print stars
    for(int j =1; j <=stars;j++){
        cout << "*";
    }
    // print spaces
    for(int k =1; k <=spaces;k++){
        cout << " ";
    }
    // print stars
    for(int j =1; j <=stars;j++){
        cout << "*";
    }
    // update spaces
    if(i < n) spaces -=2;
    else spaces +=2;
    cout << endl;

}

*/

// pattern 26:
/*
printing square pattern with empty center 
* * * * * 
*       * 
*       * 
*       * 
* * * * * 
whenever row==1 or row==n or col==1 or col==n print *
else print space
*/
/*
int n = 5;
for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        if(i == 1 || i == n || j == 1 || j == n){
            cout << "* ";
        }
        else{
            cout << "  ";
        }
    }
    cout << endl;
}
*/

// pattern 27:
/*
printing hollow right angled triangle
*
* *
*   *
*     *
* * * * *
*/

/*
int n = 5;
for(int i = 1; i <= n; i++){
    for(int j = 1; j <= i; j++){
        if(j == 1 || j == i || i == n){
            cout << "* ";
        }
        else{
            cout << "  ";
        }
    }
    cout << endl;
}

*/

// pattern 28:
/*
printing hollow pyramid
    *
   * *
  *   *
 *     * 
* * * * *

*/

/*
int n = 5;
for(int i = 1; i <= n; i++){
    // print spaces
    for(int j = i; j < n; j++){
        cout << " ";
    }
    // print stars
    for(int k = 1; k <= 2*i -1; k++){
        if(k == 1 || k == 2*i -1 || i == n){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
}
*/

// pattern 29:
/*
printing hollow parallelogram pattern

    * * * * * *
   *         *
  *         *
 * * * * * * 
 
*/

/*
int n = 4;
int m = 6;

for(int i = 1; i <= n; i++){
    // print spaces
    for(int j = i; j < n; j++){
        cout << " ";
    }
    // print stars
    for(int k = 1; k <= m; k++){
        if(i == 1 || i == n || k == 1 || k == m){
            cout << "* ";
        }
        else{
            cout << "  ";
        }
    }
    cout << endl;
}
*/

// pattern 30:
/*
concept n - value 
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

/*
int n = 4;
int size = 2*n -1;
for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
        int top = i;
        int left = j;
        int right = size - 1 - j;
        int bottom = size - 1 - i;
        int val = min(min(top, bottom), min(left, right));
        cout << n - val << " ";
    }
    cout << endl;
}
*/
 
// without using min function

/*
int n = 4;
int size = 2*n -1;
for(int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
        int top = i;
        int left = j;
        int right = size - 1 - j;
        int bottom = size - 1 - i;
        int val = top;
        if(left < val){
            val = left;
        }
        if(right < val){
            val = right;
        }
        if(bottom < val){
            val = bottom;
        }
        cout << n - val << " ";
    }
    cout << endl;
}
*/


return 0;
}