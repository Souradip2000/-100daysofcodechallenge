class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int flag=0;
        if(x==INT_MIN)  return 0;
        if(x<0){
            flag=1;
            x*=-1;
        } 
        
        while(x>0){
            int dig=x%10;
            if(1LL*ans*10 + dig>pow(2,31))   return 0;
            ans=ans*10 + dig;
            x/=10;
        }
        if(flag==1)     ans*=-1;
        return ans;
    }
};
