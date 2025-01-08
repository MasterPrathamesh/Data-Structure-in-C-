// Write a Program to swap the alternate elements of an array. (Swap the elements present at index 0 and 1, 2 and 3, 4 and 5, and so on). 
#include<iostream>
using namespace std ; 


void swapAlternate(int arr[] , int size){
    for(int i = 0 ; i < size ; i += 2){
        if(arr[i+1] < size){
            // what if the swap function is not available. Then we have another way to do this.
            // swap(arr[i] , arr[i+1]);
            int temp = arr[i]; 
            arr[i] = arr[i+1]; 
            arr[i+1] = temp; 
        }
    }
}

void printArray(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ; 
    }
}


int main(){

    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    swapAlternate(even , 8);
    swapAlternate(odd , 5); 

    printArray(even , 8); 
    cout << endl ; 
    printArray(odd , 5); 


}