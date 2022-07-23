#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[20], s2[20], *p , *q;
    cout<<endl<<endl<<"Enter String : ";
    cin>>s1;
    strcpy(s2,s1);
    strrev(s1);
    p = s1;
    q = s2;
    int flag = 0;
    while((*p !='\0') && (*q != '\0'))
    {
        if(*p != *q)
        {
            flag = 1;
           break;
        }
        p++;
        q++;   
    }
    if(flag == 0)
    {
        cout<<endl<<"String is Palindrome ";
    }
    else
    {
        cout<<endl<<"string is not palindrome"; 
    }
    return 0;
    
}
