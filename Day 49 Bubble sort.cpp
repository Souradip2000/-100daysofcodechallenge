// Bubble sort 

// Time complexity : O(n^2)
// Space complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            
            int first=j;
            int second=j+1;
            if(arr[first]>arr[second])      swap(arr[first], arr[second]);
            
        }
        
    }    
}

int main(){
    int arr[6]={13,46,24,52,20,9};
    bubbleSort(arr, 6);
    for(int i: arr)     cout<<i<<" ";
    return 0;
}
