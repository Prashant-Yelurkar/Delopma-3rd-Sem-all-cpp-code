#include<iostream> 
#include<cmath> 
using namespace std; 
double dis (int,int,int,int); 
double dis (int,int,int,int,int,int); 
int main() 
{ 
    cout<<"\n 2D distance is " <<dis(3,4,6,9); 
    cout<<"\n 3D distance is " <<dis(3,4,6,9,7,10); 
} 
double dis (int a, int b,int c,int d) 
{ 
    int p,q,r; 
    p=b-a; 
    q=d-c; 
    r=(p*p)+(q*q); 
    return(sqrt(r)); 
} 
double dis (int a, int b, int c ,int d,int e, int i) 
{ 
    int p,q,r,s; 
    p=b-a; 
    q=d-c; 
    r=i-e; 
    s=(p*p)+(q*q)+(r*r); 
    return (sqrt(s)); 
} 