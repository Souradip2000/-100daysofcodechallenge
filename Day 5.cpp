class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters[0]>target)
            return letters[0];
        int n=letters.size();
        int flag=0;
        char c;
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(letters[mid]>target){
                c=letters[mid];
                flag=1;
                e=mid-1;
            }
            else
                s=mid+1;
            mid=s+(e-s)/2;
        }
        if(flag==1)
            return c;
        return letters[0];
    }
};
