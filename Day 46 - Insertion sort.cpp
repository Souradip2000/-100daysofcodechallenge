{
    public:
    void sort012(int arr[], int n)
    {
        if(n==1)    return;
        // using Insertion sort
        int i=1;
        while(i<n){
            int idx=i;
            if(idx-1>=0){
            while(arr[idx]<arr[idx-1]){
                swap(arr[idx], arr[idx-1]);
                idx--;
            }
            }
            i++;
        }
        
    }
    
};
