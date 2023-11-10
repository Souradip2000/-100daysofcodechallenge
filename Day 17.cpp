// Program to find the element occurring twice and the missing element in an array of size n and 1<=arr[i]<=n

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int* arr=new int[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);
    
    int missingElement, doubleElement;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            doubleElement=i;
            i++;
            continue;
        }
        if(arr[i-1]!=i)   missingElement=i;
    }
    
    cout<<"The missing element is: "<<missingElement<<endl;
    cout<<"The element occurring twice is: "<<doubleElement;
    
    delete []arr;
    return 0;
}
