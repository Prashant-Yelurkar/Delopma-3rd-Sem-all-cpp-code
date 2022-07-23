#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,t;
    int *ptr = & a[0];
    cout<<"Enter Size of array less than 10 : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" of array : ";
        cin>>*(ptr + i);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (*(ptr+j) > *(ptr+j+1))
            {
                t=*(ptr+j);

                *(ptr+j) = *(ptr+j+1);

                *(ptr+j+1) = t;
            }
        }
    }
    cout <<"\nThe sorted array is :"<< endl;

    for (i=0;i<n;i++)
    {
    cout<<" "<<i+1<<" Element of array : "<<*(ptr+i)<<endl;
    }

}