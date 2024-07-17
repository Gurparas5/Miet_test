//write a progam to find the  max element from the list
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter total elements in Array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int max =arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
cout<<"The maximum element among this array is: "<<max<<endl;
return 0;
}
