// Code to print the sum of all multiples of 3 and 5 below N

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    set<int> st;
    for(int i=1; i<n; i++){
        if(i%3==0 || i%5==0)    st.insert(i);
    }
    
    int sum=0;
    for(int i: st)  sum+=i;
    
    cout<<"The sum is: "<<sum;
    return 0;
}
