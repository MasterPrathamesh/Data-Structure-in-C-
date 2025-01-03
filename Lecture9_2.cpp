// #include <climits>
// #include<iostream>
// using namespace std; 

// int getMax(int num[] , int n){

//     int max = INT_MIN;

//     for(int i = 0 ; i < n ; i++){
//         if(num[i] > max){
//             max = num[i]; 
//         }
//     }

//     // returning the max value. 
//     return max ; 

// }

// int getMin(int num[] , int n){

//     int min = INT_MAX;

//     for(int i = 0 ; i < n ; i++){
//         if(num[i] < min){
//             min = num[i]; 
//         }
//     }

//     // returning the max value. 
//     return min ; 

// }


// int main(){

//     int size ; 
//     cin >> size ; 

//     int num[100];

//     // taking the input in the array. 
//     for (int i = 0 ; i < size ; i++){
//         cin >> num[i]; 
//     }

//     cout << "Maximum value is " << getMax(num , size) << endl;
//     cout << "Minimum value is " << getMin(num , size) << endl;

// }

// #include <climits>
// #include<iostream>
// using namespace std; 

// int getMax(int num[] , int n){

//     int maximum = INT_MIN;

// // we can also optimize the code by using the predefined function. which is max() function. 
//     for(int i = 0 ; i < n ; i++){
//         maximum = max(maximum , num[i]);
//         // if(num[i] > max){
//         //     max = num[i]; 
//         // }
//     }

//     // returning the max value. 
//     return maximum ; 

// }

// int getMin(int num[] , int n){

//     int minimum  = INT_MAX;

//     for(int i = 0 ; i < n ; i++){
//         minimum = min(minimum , num[i]);
//         // if(num[i] < min){
//         //     min = num[i]; 
//         // }
//     }

//     // returning the max value. 
//     return minimum ; 

// }


// int main(){

//     int size ; 
//     cin >> size ; 

//     int num[100];

//     // taking the input in the array. 
//     for (int i = 0 ; i < size ; i++){
//         cin >> num[i]; 
//     }

//     cout << "Maximum value is " << getMax(num , size) << endl;
//     cout << "Minimum value is " << getMin(num , size) << endl;

// Finding the sum of all the elements in an array using functions. 
// #include<iostream>
// using namespace std ; 


// int totalSum(int num[] , int n){

//     int sum = 0 ; 

//     for(int i = 0 ; i < n ; i++){
//         sum += num[i];
//     }

//     cout << "Sum of all the elements in the array is : " << sum << endl; 

//     return 0; 
// }



// int main(){
    
//     int size; 
//     cout << "Enter the size of the array" << endl ; 
//     cin >> size ;

//     int num[100];

//     // taking input in the array. 
//     for(int i = 0 ; i < size ; i++){
//         cin >> num[i]; 
//     }

//     totalSum(num , size);



// }
// }









