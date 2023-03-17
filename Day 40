class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0;
        int e=letters.size()-1;
        int mid=s+(e-s)/2;
        char ans;
        int flag=0;
        while(s<=e)
        {
            if(letters[mid]>target)
            {
                ans = char(letters[mid]);
                e=mid-1;
                flag=1;
            }
            else if(letters[mid]<=target)
            {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        if(flag==0)
            return letters[0];
        else
            return ans;
    }
};
