// program to calculate the power of 2^n
#include<iostream>
using namespace std;

int power(int n){
    if(n==0)
        return 1;
    return 2*power(n-1);
}
int main(){
    int n;
    cout<<"Enter the power to calculate: ";
    cin>>n;
    
    cout<<power(n);
    return 0;
}
