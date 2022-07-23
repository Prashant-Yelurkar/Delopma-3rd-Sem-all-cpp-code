#include<iostream>
using namespace std;
class Number
{
    private:
        int a,b;
    public:
        Number(int c, int d)
        {
            a=c;
            b=d;
        }
        void calculation()
        {
            int add,sub,mul;
            float div;
            cout<<endl<<"Calculation : "<<endl;
            add = a + b;
            cout<<endl<<"Addition of a & b is : "<<add;
            sub = a - b;
            cout<<endl<<"Substraction of a & b is : "<<sub;
            mul = a * b;
            cout<<endl<<"Multiplication of a & b is : "<<mul;
            div = a / b;
            cout<<endl<<"Division of a & b is : "<<div;
        }
        ~Number()
        {
            cout<<endl<<endl<<"Destructure is called ";
        }
};
int main()
{
    Number n1(10,10);
    n1.calculation();
    return 0;

}