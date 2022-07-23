//define a class fraction ,which has the numerator and denominator as data member a data using default constractor and display fraction
#include<iostream>
using namespace std;

class fraction
{
    private:
        float  nume;
        float  denom;
        
    public:
        fraction(float a, float b)
        {
           nume = a;
           denom = b;
        }
        void disply ()
        {
            float fraction;
            fraction = nume/denom;
            cout<<"/nFraction is :"<<fraction;
        }
}; 
int main()
{
    fraction f1(10,20);
    fraction f2(100,5);
    f1.disply();
    f2.disply();
    return 0;
}