// 567. Permutation in a string


class Solution {
private:
    bool isEqual(int arr1[26], int arr2[26])
    {
        for(int i=0; i<26; i++)
        {
            if(arr1[i] != arr2[i])
                return false;
        }

        return 1;
    }
/*
    void printArr(int arr[])
    {
        cout<<endl<<"Printing array: "<<endl;
        for(int i=0; i<26; i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
*/

public:
    bool checkInclusion(string s1, string s2) {
        // character count arr for s1
        int count1[26]={0};
        for( char ch: s1)
        {
            int index1=ch-'a';
            count1[index1]++;
        }

        //printArr(count1);

        // check first window
        int i=0;
        int windowSize=s1.length();
        int count2[26]={0};
        while(i<windowSize && i<s2.length())
        {
            // character count arr for window
            int index2= s2[i]-'a';
            count2[index2]++;
            i++;
        }

        // cout<<"Printing count2: "<<endl;
        // printArr(count2);

        // check if this window is the ans
        if (isEqual(count1,count2))
            return true;
        
        // check furthur windows
        while(i<s2.length())
        {
            cout<<"Iteration "<<i<<endl;
            // decrement freq of old char
            int indexOld = s2[i-windowSize] - 'a';
            // cout<<"\tindexOld: "<<indexOld<<endl;
            count2[indexOld]--;
            
            // increment freq of new char
            int indexNew = s2[i]-'a';
            //cout<<"\tindexNew: "<<indexNew<<endl;
            count2[indexNew]++;

            // cout<<"Printing count2: "<<endl;
            // printArr(count2);

            // check condition
            if( isEqual(count1, count2))
                return true;
            
            i++;
        }

        return false;
    }
};
