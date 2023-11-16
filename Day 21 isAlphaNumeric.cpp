#include<iostream>
#include<string>
using namespace std;

bool isAlphaNumeric(char ch){
    if((ch>='a'&&ch<='z') || (ch>='0'&&ch<='9'))    return true;
    return false;
}

int main(){
    char ch;
    cin>>ch;
    
    if(isAlphaNumeric(ch))  cout<<"Alphanumeric";
    else cout<<"No";
    
    return 0;
}
