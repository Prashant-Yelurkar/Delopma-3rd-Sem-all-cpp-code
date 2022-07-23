#include <iostream>
using namespace std;
int main()
{
    int a,b;
    bool result;
    cout <<"Enter first number : ";
    cin >>a;
    cout <<"Enter second number : ";
    cin >>b;

    result = ( a == b);
    cout <<a <<" == "<<b <<" = "<<result <<endl;

    result = ( a != b);
    cout <<a <<" != "<<b <<" = "<<result <<endl;

    result = ( a < b);
    cout <<a <<" < "<<b <<" = "<<result <<endl;

    result = ( a > b);
    cout <<a <<" > "<<b <<" = "<<result <<endl;

    result = ( a <= b);
    cout <<a <<" <= "<<b <<" = "<<result <<endl;

    result = ( a >= b);
    cout <<a <<" >= "<<b <<" = "<<result <<endl;

    return 0;
}