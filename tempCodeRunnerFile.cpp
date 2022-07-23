#include<iostream>
using namespace std;
class 3D
{
    int x, y, z; 
    public:
        3D(int a=0 , int b=0 , int c=0 )
        {
            X = a ;
            y = b ;
            z = c ;
        }

        3D operator ++()
        {
            X = X +  1;
            y = y + 1;
            z = z + 1; 
            return *this;
        }
        3D operator ++(int)
        {
            3D t = *this;
            X = X +  1;
            y = y + 1; z = z + 1; 
            return t;
        }
        3D show()
        {
        cout<<  "The   elements   are:\n" cout<< "x:"<<this- x<<", y:"<<this-y <<",z:" <<this- z;

} ;
int main()
{
    3D pt1(2,4,5), pt2(7,1,3);
    cout<< "Point one' s dimensions before increment are:"<< ptl.show ();
    ++pt1;
    cout<< "Point one' s dimensions after increment are:"<< ptl.show ();
    cout<< "Point two' s dimensions before increment are:"<< pt2.show();
    pt2++;
    cout<< "Point two' s dimensions after increment are:"<< pt2.show();
    return 0;
}
