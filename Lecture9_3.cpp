// Introduction to Linear Search. 
#include<iostream>
using namespace std; 

bool search(int arr[], int size , int key){

    for(int i = 0 ; i < size ; i++){

        if(arr[i] == key){
            return 1 ; 
        }
    }
    return 0; 
}


int main(){

    int arr[10] = {5,7,-2,10,22,-2,0,5,22,1}; 

    // search in the array. 
    int key ; 
    cout << "Enter the element to search for : " << endl ; 
    cin >> key ; 

    bool found = search(arr , 10 , key);

    if(found){
        cout << "Key is present in the array" << endl ; 
    }
    else{
        cout << "Key is not present in the array " << endl ; 
    }

    return 0 ; 
}






