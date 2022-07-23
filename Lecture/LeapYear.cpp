#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"\n\nEnter a Year :";
    cin>>year;
    cout<<"\n\n";
    if (year %4 ==0)
    {
        cout<<year <<" is Leap Year ";
    }
    else
    {
        cout<<year <<"is not Leap Year";
    }
}