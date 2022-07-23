#include<iostream>
using namespace std;
int main()
{
    int i,a,m;
    cout<<"Enter Number For Table :";
    cin>>a;
    for(i=1;i<11;i++)
    {
        m=i*a;
        cout<<a <<" * "<<i<<"  : "<<m<<endl;
    }
    
}