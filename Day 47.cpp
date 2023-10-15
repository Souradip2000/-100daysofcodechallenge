// Code to find if there are duplicate elements in the array
// Time complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

bool hasDuplicates(int arr[], int n){
    unordered_set<int> hashSet;
    for(int i=0;i<n;i++){
        if(hashSet.find(arr[i]) != hashSet.end())   return true;
        else    hashSet.insert(arr[i]);
    }
    return false;
}

int main()
{
    int arr[6] = {1,7,2,3,4,5};
    if(hasDuplicates(arr, 6))   cout<<"The array has duplicate values."<<endl;
    else    cout<<"There are no duplicate values in the array.";
    return 0;
}


// brute force approach will be to run two loops and check if one element at a time is similar to any other element in the array
// time complexity : O(n^2)
