// To print the Fibonacci sequence till the nth term

// Time complexity : O(n)
// Space complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

void printFibo(int n){
    int first=0;
    int second=1;
    if(n==1){
        
        cout<<first;
        return;
        
    }else if(n==2){
        
        cout<<first<<" "<<second<<" ";
        return;
        
    }
    
    cout<<first<<" "<<second<<" ";
    for(int i=3;i<=n;i++){
        
        int term=first+second;
        cout<<term<<" ";
        first=second;
        second=term;
        
    }
    
}

int main(){
    int n;
    cin>>n;
    printFibo(n);
    return 0;
}
