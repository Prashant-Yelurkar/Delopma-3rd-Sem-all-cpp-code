#include<iostream>
using namespace std;
class circle
{
    private:
        float r;
        float pi=3.14;
        float area;
    public:
        void Accept()
        {
            cout<<"Enter A Radius :";
            cin>>r;
        }
        void calculate()
        {
            area = pi * r * r;
        }
        void display()
        {
            cout<<"\nArea of Circle is :"<<area<<endl;
        }

};
int main()
{
    circle c1;
    c1.Accept();
    c1.calculate();
    c1.display();
}
