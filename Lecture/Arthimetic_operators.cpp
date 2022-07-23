#include <iostream>
using namespace std;
int main ()
{
    int a,b,add;
    cout <<"Enter first number :";
    cin >>a;
    cout <<"Enter second number : ";
    cin >>b;

    add = a + b;
    cout <<"\nAddition of first and second number is :" <<add ;

    add = a - b;
    cout <<"\nSubstraction of first and second number is :" <<add ;

    add = a * b;
    cout <<"\nMultiplication of first and second number is :" <<add ;

    add = a / b;
    cout <<"\nDivision of first and second number is :" <<add ;

    add = a % b;
    cout <<"\nModules of first and second number is :" <<add ;
}
