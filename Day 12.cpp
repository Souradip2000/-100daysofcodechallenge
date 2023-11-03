#include<bits/stdc++.h>
using namespace std;

int CheckPassword(string str, int n){
    if(str[0]>'0' && str[0]<'9')    return 0;
    int cntChar=0, cntNum=0, cntCaps=0;
    for(int i=0;i<n;i++){
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A' && str[i]<='Z'))  cntChar++;
        else if(str[i]>='0'&&str[i]<='9') cntNum++;
        else if(str[i]=='/')    return 0;
        if(str[i]>='A'&&str[i]<='Z')    cntCaps++;
    }
    if((cntChar>=4)&&(cntNum>=1)&&(cntCaps>=1)) return 1;
    return 0;
}

int main(){
    string s;
    cin>>s;
    int ans = CheckPassword(s, s.length());
    cout<<ans;
    return 0;
}
