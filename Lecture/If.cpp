#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"\n\nEnter First Number :";
    cin>>a;
    cout<<"Enter Second Number :";
    cin>>b;

    if(a>b)
    { 
        cout<<"\nFirst Number "<<a<<" is Greater";
    }
    else
    {
        cout<<"\nSecond Number "<<b<<" is Greater";
    }
}