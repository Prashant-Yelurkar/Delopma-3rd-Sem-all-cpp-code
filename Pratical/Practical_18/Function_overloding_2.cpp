# include<iostream> 
using namespace std; 
int max1(int,  int); 
float max1(float,  float,  float); 
int main() 
{ 
    cout<<"\n Maximum integer is="<<max1(3,6); 
    cout<<"\n Maximum float is="<<max1(3.4, 6.7, 8.9); 
} 
int max1(int a, int b) 
{ 
    if(a>b) 
    return a; 
    else  
    return b; 
} 
float max1(float a, float b, float c) 
{ 
    if (a>b  &&  a>c) 
    return a; 
    else if(b>a  &&  b>c) 
    return b; 
    else  
    return c; 
} 