// Leetcode

// 268. - Missing number

#include <bits/stdc++.h>    // used to include all libraries

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int value = -1;
        for( int i=0; i<=nums.size(); i++)
        {
            int value = i;
            int flag = 0;
            for(int j=0; j<nums.size(); j++)
            {
                if( nums[j] == i )
                {
                    flag = 1;
                    break;
                }
            }
            if( flag == 1)
            {
                continue;
            }
           
                return i;
            
        }
        return value;
     }
};



    // practise 
    
    #include <bits/stdc++.h>

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        for( int i=0; i <= n; i++ )
        {
            int flag = 0;

            for( int j=0; j<n; j++ )
            {
                if( nums[j] == i )
                {
                    flag = 1;
                    break;
                }
            }

            if ( flag != 0 )
            {
                continue;
            }

            ans = i;
        }

        return ans;
    }
};

