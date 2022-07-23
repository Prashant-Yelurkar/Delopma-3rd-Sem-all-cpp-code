#include<iostream>
using namespace std;
class triangle
{
    protected:
        int tr_height, tr_base;
    public:
        void getdata()
        {
            cout<<endl<<"Triangle Details : ";
            cout<<endl<<"Enter Height of triangle :";
            cin>>tr_height;
            cout<<"Enter base of triangle :";
            cin>>tr_base;
        }
};
class rectangle
{
    protected:
        int re_length, re_breadth;
    public:
        void rectanglegetdata()
        {
            cout<<endl<<"Rectangle Details : ";
            cout<<endl<<"Enter Length of Rectangle :";
            cin>>re_length;
            cout<<"Enter breadth of Rectangle :";
            cin>>re_breadth;
        }
};
class Area:public triangle ,public rectangle
{
    public:
        void calculate()
        {
            triangle::getdata();
            rectangle::rectanglegetdata();
            float a_triangle, a_rectangle;
            a_triangle= 0.5 * tr_base * tr_height;
            a_rectangle = re_length * re_breadth;

            cout<<endl<<"Area of Triangle : "<<a_triangle<<endl;
            cout<<"Area of Rectangle : "<<a_rectangle<<endl;
        }
};
int main()
{
    Area a1;
    a1.calculate();
    return 0;
}