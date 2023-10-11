// Program to reverse an array
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int i=0, j=6;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;
}
