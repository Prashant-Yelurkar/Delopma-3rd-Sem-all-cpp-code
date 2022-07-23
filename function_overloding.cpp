# include <iostream>
using namespace std;
double area (int);  
double area ( int ,int ); 
int  main()

{   
    cout << area ( 4 );  // Invokes first definition
    cout << area ( 4, 6);  // Invokes second definition
    return 0;
}
double area ( int r)
{
    double A;
    A = 3.14 * r * r;  // area of a circle = Pi * R *R
    return A;
    cout<<endl;
}
double area (int l ,int b)
{
    double A;
    A = l * b;
    cout<<endl;
    cout<<endl;
    return A;
}