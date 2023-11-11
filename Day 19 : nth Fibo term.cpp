// code to print fibonacci series using recursion
#include<iostream>
using namespace std;

int Fibonacci(int n){
   if(n==1) return 0; 
   else if(n==2)  return 1;
   
   return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter the nth Fibonacci number to print: ";
    cin>>n;
    
    int f_term=0, s_term=1;
    int ans = Fibonacci(n);
    cout<<ans;
    return 0;
}
