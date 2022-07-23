#include<iostream>
using namespace std;
int volume(int s)
{
     return (s*s*s);
}
double volume( double r, int h)
{
    return (3.14*r*r*h);
}
int main()
{
    cout<<endl<<"volume of cube is : "<<volume(5)<<endl;
    cout<<"volume of cylinder is : "<<volume(10.5,8);
    return 0;
}