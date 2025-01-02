// Introduction to Arrays.
// Introduction to Arrays. 
#include<iostream>
using namespace std ; 


void printArray(int arr[] , int n){
    cout << "Printing the array : " << endl ; 
    for(int i = 0 ; i < n ; i++){
        cout << "The value at index " << i << " is : " << arr[i] << endl ; 
    }
}







int main(){

    // // declaring the array. 
    // int number[15] ; 

    // // accessing an array. 
    // cout << "Value at index 0 is : " << number[0] << endl ; 
    // cout << "Value at index 1 is : " << number[1] << endl ; 
    // cout << "Value at index 2 is :" << number[2] << endl ; 


    // // initializing an array. 
    // int second[3] = {5 , 7 , 11}; 
    
    // cout << "Value at index 2 is : " << second[2] << endl ; 

    // int third[15] = {2,7};

    // // accessing the whole array. 
    // for(int i = 0 ; i < 15 ; i++){
    //     cout << " The value at index " << i << " is   :" << third[i] <<  endl ; 
    // }


    // initializing all the values of the array to 0. 
    int fourth[10] = {0};
    printArray(fourth,10);
    // for(int i = 0 ; i < 10 ; i++){
    //     cout << "The value at index " << i << " is : " << fourth[i] << endl; 
    // }


    // accessing the array function. 
    int fifth[15] = { 2 , 7 , 11 , 10 , 6}; 
    printArray(fifth,5);






    return 0 ; 
}