#include<iostream>
#include<string.h> 
using namespace std; 
void swap(int, int); 
void swap(float, float); 
void swap(char, char); 
int main() 
{ 
    int a,b; 
    char i,e; 
    float c,d; 
    cout<<"\n Enter First integer numbers:"; 
    cin>>a;
    cout<<"\n Enter Second integer numbers:"; 
    cin>>b;
    cout<<"Before Interchange :  ";
    cout<<"a="<<a<<"      "<<"b="<<b<<endl; 
    cout<<"After Interchange  :  ";
    swap(a,b); 
    cout<<"\n Enter First Float numbers:"; 
    cin>>c;
    cout<<"\n Enter Second Float numbers:"; 
    cin>>d; 
    cout<<"Before Interchange :  ";
    cout<<"c="<<c<<"      "<<"d="<<d<<endl; 
    cout<<"After Interchange  :  ";
    swap(c,d); 
    cout<<"\n Enter First String:"; 
    cin>>i;
    cout<<"\n Enter Second String:"; 
    cin>>e;
    cout<<"Before Interchange :  ";
    cout<<"i="<<i<<"      "<<"e="<<e<<endl; 
    cout<<"After Interchange  :  ";
    swap(i,e);	 
} 
void swap(int a, int b) 
{ 
    int c; 
    c=a; 
    a=b; 
    b=c; 
    cout<<"a="<<a<<"      "<<"b="<<b<<endl;
} 
void swap(float p, float q) 
{ 
    float temp; 
    temp=p; 
    p=q; 
    q=temp; 
    cout<<"c="<<p<<"      "<<"d="<<q<<endl; 
} 
void swap(char x, char y) 
{ 
    char c; 
    c=x;
    x=y;
    y=c;
    cout<<"i="<<x<<"      "<<"e="<<y<<endl;
} 