#include <iostream>
using namespace std;
int main()
{
    int a[5],n,i,k;
    int *pointer =& a[0];
    cout<<"How many element u want ? maximum 10 element : ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1 <<" Element of array :";
        cin>> *(pointer+i);
    }
    cout<<endl<<"Element to be serched: ";
    cin>>k;
    for(i=0; i<n; i++)
    {
       if(*pointer == k)
       {
           cout<<"Element "<<k<<" found at position "<<i+1 <<" and index "<<i;
           break;
       }
       else
       {
           pointer++;
       }
    }
    if(i==n)
       {
           cout<<"Element not found in array";
       }
    
    return 0;
}
