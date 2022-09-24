#include<iostream>
using namespace std;

int main()
{
    int arr1[6]={1,2,3,4,5,6};
    int arr2[6],i,j;

    for(i=0,j=5;i<6;i++,j--)
    {
        arr2[j]=arr1[i];
    }
    cout<<endl<<"Original Array : ";
    for(i=0;i<6;i++)
    {
        cout<<arr1[i]<<"  ";
    }
    cout<<endl<<"Reversed Array : ";
    for(j=0;j<6;j++)
    {
        cout<<arr2[j]<<"  ";
    }


    
   
    return 0;
}