#include<iostream>
using namespace std;
class Number
{
    private:
        int x, y;
    public:
        void accept();
        void add();
        void sub();
        void mul();
        void div();
};
inline void Number :: accept()
{
    cout<<endl<<"Enter First Number :";
    cin>>x;
    cout<<"Enter second Number : ";
    cin>>y;
}
inline void Number :: add()
{
    int a;
    a = x + y;
    cout<<endl<<"Addition is : "<<a<<endl;
}
inline void Number :: sub()
{
    int a;
    a = x - y;
    cout<<"Substraction is : "<<a<<endl;
}
inline void Number :: mul()
{
    int a;
    a = x * y;
    cout<<"Multiplication  is : "<<a<<endl;
}
inline void Number :: div()
{
    int a;
    a = x / y;
    cout<<"Division is : "<<a<<endl;
}
int main ()
{
    Number n1;
    n1.accept();
    n1.add();
    n1.sub();
    n1.mul();
    n1.div();
}