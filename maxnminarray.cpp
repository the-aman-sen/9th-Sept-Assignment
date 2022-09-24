#include<iostream>
using namespace std;

int main()
{
    int i,a[10],min,max;

    cout<<endl<<"Enter 10 elements in the array : ";

    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Entered array is : "<<endl;
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<"   ";
    }
    min=max=a[0];
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];

        }
        
    }
    cout<<endl<<"Minimum element in the array : "<<min;
    cout<<endl<<"Maximum element in the array : "<<max;

    return 0;

}
