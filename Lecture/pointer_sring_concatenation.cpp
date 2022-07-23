#include<iostream>
using namespace std;
void camtam (char *p,char *q);
int main()
{
    char s1[40],s2[40],*p,*q;
    p=&s1[0];
    q=&s2[0];
    cout<<"Enter string 1 :";
    cin>>s1;
    cout<<"Enter string 2 :";
    cin>>s2;
    camtam (s1,s2);
    cout<<"After concatentation :"<<s1<<endl;
    cout<<"After concatentation :"<<s2<<endl;
    return 0;
}
void camtam (char *p, char *q)
{
    while(*p!='\0')
    {
        p++;
    }   
    while(*q!= '\0')
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
}