// Sort an array of 0s, 1s and 2s


public:
    void sort012(int a[], int n)
    {
        // code here 
        map<int, int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(a[i])==mp.end()){
                mp.emplace(a[i],1);
            }     
            else mp[a[i]]++;
        }
        int idx=0;
        for(int i=0;i<mp[0];i++){
            a[idx++]=0;
        }
        for(int i=0;i<mp[1];i++){
            a[idx++]=1;
        }
        for(int i=0;i<mp[2];i++){
            a[idx++]=2;
        }
    }
