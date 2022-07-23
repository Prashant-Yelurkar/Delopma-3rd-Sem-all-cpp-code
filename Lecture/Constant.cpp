#include <iostream>
using namespace std;
int main ()
{
    const int a = 10;
    cout <<"Value of a :"<<a;
    cout <<"\nEnter new Value of a :";
    cin <<a;                                // it will show error because a is constant
    cout <<"\nAfter changing value of constant a :"<<a;
    
    
}