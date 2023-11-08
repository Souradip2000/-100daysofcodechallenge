#include<iostream>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>key)  swap(arr[j], arr[j+1]);
        }
    } 
}

int main(){
    int arr[7] = {14,9,15,12,6,8,13};
    insertionSort(arr, 7);
 
    cout<<"Displaying the sorted array: "<<endl;
    for(int i: arr) cout<<i<<" ";
    return 0;
}
