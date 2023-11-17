// program to find if a string is a palindrome or not
// if it is not a palindrome, then make it a palindrome in minimum number of steps

#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrome(string s){
    string original=s;
    reverse(s.begin(), s.end());
    if(s==original) return true;
    return false;
}

string makePalindrome(string s){
    string original=s;
    string ans;
    reverse(s.begin(), s.end());
    for(int i=0;i<original.size(); i++){
        if(isPalindrome(s.substr(i))){
            ans=s.substr(0,i);
        }
    }
    return ans+original;
}

int main(){
    string s="abbace";
    string ans;
    if(isPalindrome(s)) cout<<s;
    else ans=makePalindrome(s);
    cout<<ans;
    if(isPalindrome(ans))   cout<<endl<<"It is a Palindrome.";
    return 0;
}
