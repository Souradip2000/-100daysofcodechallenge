#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int p1,p2;
    cin>>p1>>p2;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(p1%arr[i]==0 && p2%arr[i]==0)    cnt++;
    }
    cout<<cnt;
    return 0;
}
