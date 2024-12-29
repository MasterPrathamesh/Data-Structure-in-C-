// understanding Binary & Decimal Number System . 
// converting Decimal number to binary number . 
// suppose we have a no. of digits like : 1,2,3 and we want them in the same flow : then we have a formula like : ans = (ans * 10 ) + digit. 
/* for ex : 
    ans = (ans * 10 ) + digit = 0 * 10 + 1 = 1 ;
    ans = (ans * 10 ) + digit = 1 * 10 + 2 = 12 ;
    ans = (ans * 10 ) + digit = 12 * 10 + 3 = 123 ;
*/
// Now suppose we want to make the reverse flow of it as 321 then : we have a formula like : ans = (digit * pow(10,i)) + ans ; 
/* for ex :
    ans = (digit * pow(10,i)) + ans = 0 + 3 = 3 ;
    ans = (digit * pow(10,i)) + ans = 3 + 2 = 5 ;
    ans = (digit * pow(10,i)) + ans = 5 + 1 = 6 ;
*/
#include<iostream>
#include<math.h>

using namespace std ; 

int main(){

    // int n ; 
    // cout << "Enter the value of N : " << endl ; 
    // cin >> n; 

    // int ans = 0 ; 
    // int i = 0 ; 
    // while(n!=0){
    //     int bit = n & 1 ; 
    //     ans = (bit * pow(10,i) ) + ans ;
    //     n = n >> 1 ; 
    //     i++ ; 
    // }
    // cout << "Answer is : " << ans << endl ; 


    // int n ; 
    // cout << "enter the value of n : " << endl ; 
    // cin >> n ; 

    // int ans = 0 ; 
    // int i = 0 ; 
    // while(n!=0){
    //         int bit = n & 1 ; 
    //         ans = (bit  * pow(10 , i )) + ans ; 
    //         n = n >> 1 ; 
    //         i++ ; 
    // }

    // cout << "Answer is : " << ans << endl ; 

   // Now we will see how to convert binary to decimal number .
   int n ; 
   cout << "Enter the Binary number : " << endl ; 
   cin >> n ; 

   int ans = 0 ;
   int i = 0 ;
   while(n != 0 ){
       int digit = n % 10 ; 

       if(digit == 1){
           ans = ans + pow(2, i);
       }
       n = n / 10 ; 
       i++ ; 
   }
   cout << "Answer is : " << ans << endl ;

    return 0 ;
}