#include<iostream>
using namespace std;
   int max (int , int ,int);        // function prototype for three integers
   float max ( float, float , float  );    // function prototype for three floats
int main()
{  
     cout<<max( 3, 6, 8);    // Invokes first definition
    cout<<max( 3.4 , 6.7 , 1.2);    // Invokes second definition
    return 0;
}
int max ( int a ,int b, int c)
{
    if( a > b && a >c)
    {
        return a;
    }
    else if( b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
float max(float a , float  b , float c)
{
    if( a > b && a >c)
    {
        return a;
    }
    else if( b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }  
}