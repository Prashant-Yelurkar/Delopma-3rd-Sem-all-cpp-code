#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,t;
    int *ptr = & a[0];
    int *q;
    cout<<"Enter Size of array less than 10 : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" of array : ";
        cin>>*(ptr + i);
    }
    cout<<endl;
    for (i=0;i<n;i++)
    {
    cout<<" "<<i+1<<" Element of array : "<<*(ptr+i)<<endl;
    }
    q = a + n-1;
    for (i=0;i<n/2;i++)
    {
        t=*ptr;
        *ptr=*q;
        *q=t;
        *ptr++;
        *q--;
    }
    cout<<endl;
    for (i=0;i<n;i++)
    {
        cout<<a[i];
        //cout<<" "<<i+1<<" Element of array after Reverse : "<<*(ptr+i)<<endl;
    }

}