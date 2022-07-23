#include<iostream> 
using namespace std; 
double area(int); 
double area(int, int); 
int main() 
{ 
    cout<<"\n Area  of circle="<<area(4); 
    cout<<"\n Area of rectangle="<<area(4,6); 
} 

double area(int r) 
{ 
    double A; 
    A=3.14*r*r; 
    return A; 
} 

double area(int l, int b) 
{ 
    double A; 
    A=l*b; 
    return A; 
} 