#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the number of rows and cols: ";
    cin>>n>>m;
    
    int* * arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    
    cout<<endl<<"Enter the elements of the 2D array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Displaying the 2D array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    
    delete []arr;
    
    return 0;
}
