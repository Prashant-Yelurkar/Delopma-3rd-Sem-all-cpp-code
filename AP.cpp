#include<iostream>
using namespace std;
int  main ()
{
    int a,d,n,sum,term=0;
    cout<<"Enter the first term, common difference,"
    <<"and the number of terms to be summed"
    <<" respectively:\n"; 
    cin>>a>>d>>n;
    sum=0;
    int i=1;
    cout<<"\nThe terms are "; 
    do
    {
    term= a+ (i-1)*d; sum+=term; cout<<term<<" ";
    ++i;
    }
    while (i<=n);
    cout<<"\nThe sum of A.P. is "<<sum;
}

