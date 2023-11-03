// to find the number of unique elements in a vector

#include<bits/stdc++.h>
using namespace std;

int countUniqueElements(vector<int> arr, int n){
   map<int, int> mpp;
   int cnt=0;
   for(int i: arr){
       mpp[i]++;
   }
   for(auto it=mpp.begin(); it!=mpp.end(); it++){
       if(it->second==1)    cnt++;
   }
   cout<<"displaying the frequency of each element: "<<endl;
   for(auto it=mpp.begin(); it!=mpp.end(); it++){
       cout<<"element: "<<it->first;
       cout<<"\tfreq: "<<it->second<<endl;
   }   
   return cnt;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    vector<int> arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    
    cout<<"Ans: "<<countUniqueElements(arr, n);
    
    return 0;
}
