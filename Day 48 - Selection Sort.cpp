#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    int left=0;
    
    for(int i=0;i<n;i++){
        
        int mini=arr[i];
        int miniIdx=i;
        
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<mini){
                
                mini=arr[j];
                miniIdx=j;
                
            }
        }
        
        swap(arr[left++], arr[miniIdx]);
    }
}
int main(){
    int arr[6]= {13,46,24,52,20,9};
    selectionSort(arr, 6);
    for(int i: arr)     cout<<i<<" ";
    return 0;
}
