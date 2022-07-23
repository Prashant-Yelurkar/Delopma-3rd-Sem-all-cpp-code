#include<iostream>
using namespace std;
int main()
{
    char op;
    float a,b;
    cout<<"Enter operation such as +, -, *, /  :";
    cin>>op;
    cout<<"\n\nEnter First Number :";
    cin>>a;
    cout<<"Enter Second Number :";
    cin>>b;
    switch (op)
    {
        case '+':
        cout<<a <<" + "<<b <<" =  "<<a+b;
            break;
        case '-':
        cout<<a <<" - "<<b <<" =  "<<a-b;
            break;
        case '*':
        cout<<a <<" * "<<b <<" =  "<<a*b;
            break;
        case '/':
        cout<<a <<" / "<<b <<" =  "<<a/b;
            break;
        
        default:
        cout<<"Enter Perfect Operator ";
            break;
    }

    

}
