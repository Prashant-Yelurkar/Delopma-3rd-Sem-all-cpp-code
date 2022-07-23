#include<iostream>
using namespace std;
int main()
{
    char a[40],*p;
    cout<<endl<<"Enter a string : ";
    cin>>a;
    char c;
    cout<<"Enter character to be serch into string : ";
    cin>>c;
    int pos = 0;
    p = a;

    while(*p != '\0')
    {
        if (*p == c)
        {
            cout<<endl<<"Character found at position : "<<pos +1 <<endl;
            break;
        }
        pos++;
        p++;
    }
    if(*p == '\0')
    {
      cout<<endl<<"Character not found "<<endl;  
    }
}