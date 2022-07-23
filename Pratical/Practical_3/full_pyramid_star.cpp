#include<iostream>
using namespace std;
int main()
{
    int i,j,k,row;
    cout<<endl<<"Enter Number of row :";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=row;j>=i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
         cout<<endl;
    }
    return 0;
}


