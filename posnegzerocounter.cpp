#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,positive=0,negative=0,zero=0;

    cout<<endl<<"Enter no. of elements to enter in the array";
    cin>>n;

    cout<<"Enter "<<n<<" numbers in the array : ";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Entered array is : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            negative++;
        else if(a[i]>0)
            positive++;
        else
            zero++;
    }
    cout<<endl<<"Number of Positive Integers in the array : "<<positive;
    cout<<endl<<"Number of Negative Integers in the array : "<<negative;
    cout<<endl<<"Number of Zero in the array : "<<zero;
    


    return 0;
}