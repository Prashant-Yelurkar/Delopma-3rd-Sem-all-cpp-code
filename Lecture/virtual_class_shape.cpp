#include<iostream>
using namespace std;
class shape
{
    protected:
        double a,b;
    public:
        void getdata()
        {
            cout<<endl<<"Enter value of a : ";
            cin>>a;
            cout<<"Enter value of b : ";
            cin>>b;

        }
        virtual void display_area()
        {

        }
};
class triangle:public shape
{
    public:
        void display_area()
        {
            double area = 0.5*a*b;
            cout<<endl<<"Area of triangle : "<<area<<endl;
        }
};
class rectangle:public shape
{
    public:
        void display_area()
        {
            double area =  a*b;
            cout<<endl<<"Area of Rectangle : "<<area<<endl;
        }
};
int main()
{
    shape *p;
    rectangle r1;
    p = &r1;
    p->getdata();
    p->display_area();

    triangle t1;
    p = &t1;
    p->getdata();
    p->display_area();
    return 0;
}