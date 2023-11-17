// write a program to print the number of repeating characters in a string alongwith their frequency
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s="geeksforgeeks";
    unordered_map<char, int> mpp;
    for(char i: s){
        mpp[i]++;
    }
    for(auto i: mpp){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}

// average case time complexity of accessing each element in an unordered_map is O(1)
// time complexity of inserting an element in an unordered_map is O(1)
