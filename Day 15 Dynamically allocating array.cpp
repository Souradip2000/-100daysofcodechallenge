// code to dynamically allocate memory for a single variable and an array
#include <iostream>
using namespace std;

int main()
{
    // dynamically allocated memory for a variable
    int *ptr1 = new int;
    *ptr1=4;
    cout<<"Memory has been dynamically allocated for an integer type variable and it has been initialised."<<endl;
    cout<<*ptr1<<endl;
    cout<<"Freeing up space for the dynamically allocated variable."<<endl;
    delete ptr1;               // freeing up memory from heap
    
    cout<<"Enter the values of the array of size five: "<<endl;
    int* a = new int[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    
    cout<<"Displaying the dynamically allocated array: "<<endl;
    for(int i=0;i<5;i++)   cout<<a[i]<<" ";
    cout<<endl;
    
    cout<<"Freeing up space allocated for the dynamically allocated array.";
    delete []a;
    return 0;
}
