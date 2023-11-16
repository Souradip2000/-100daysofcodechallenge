// Program to convert a string from Uppercase to Lowercase
#include<iostream>
#include<cctype>
using namespace std;

void toLowerCase(string &s){
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
    }
}

int main(){
    string s="ABCDE";
    toLowerCase(s);
    cout<<s;
    return 0;
}



// Program to convert a string from Uppercase to Lowercase
#include<iostream>
#include<cctype>
using namespace std;

void toLowerCase(string &s){
    for(int i=0;i<s.length();i++){
        s[i]=char(s[i]-'A'+'a');
    }
}

int main(){
    string s="ABCDE";
    toLowerCase(s);
    cout<<s;
    return 0;
}





// Program to convert a string from Uppercase to Lowercase
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="ABCDE";
    transform(s.begin(), s.end(), s.begin(), :: tolower);
    cout<<s;
    return 0;
}
