// Write a program to display the array element.

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array elements are: "<<endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    

    return 0;
}
