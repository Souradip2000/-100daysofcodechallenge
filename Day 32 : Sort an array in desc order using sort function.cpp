#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,5,6,3,7,2,9,11};
    sort(arr, arr+8, greater<int>());
    for(int i: arr) cout<<i<<" ";
    return 0;
}
