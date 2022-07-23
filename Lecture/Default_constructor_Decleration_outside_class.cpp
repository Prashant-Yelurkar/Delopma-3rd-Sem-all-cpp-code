//define a class fraction ,which has the numerator and denominator as data member a data using default constractor and display fraction
#include<iostream>
using namespace std;

class fraction
{
    private:
        float  nume;
        float  denom;
        
    public:
        fraction();
        void disply ();
}; 
fraction::fraction()
{
    cout<<"Enter Numerator :";
    cin>>nume;
    cout<<"Enter Denominator :";
    cin>>denom;
}
void fraction::disply()
{
    float fraction;
    fraction = nume/denom;
    cout<<"Fraction is :"<<fraction;
}
int main()
{
    fraction f1;
    f1.disply();
    return 0;
}