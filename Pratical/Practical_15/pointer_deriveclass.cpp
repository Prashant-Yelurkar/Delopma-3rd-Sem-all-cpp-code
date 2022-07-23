#include<iostream>
using namespace std;
class polygon
{
    protected:
        int width, height;
    public:
        void getdata()
        {
            cout<<endl<<"Enter Polygon etails: "<<endl;
            cout<<"Enter Width : ";
            cin>>width;
            cout<<"Enter Height : ";
            cin>>height;
        }
        void showdata()
        {
            cout<<endl<<" Details :"<<endl;
            cout<<"Width : "<<width<<endl;
            cout<<"Height : "<<height<<endl;
        }
        virtual void calculate()
        {}
};
class rectangel:public polygon
{
    public:
        void calculate()
        {
            polygon::getdata();
            float area;
            area =(width * height);

            cout<<endl<<"Area of Rectangle is : "<<area<<endl;
        }
};
class triangle:public polygon
{
    public:
        void calculate()
        {
            polygon::getdata();
            float area;
            area =((width * height)/2);

            cout<<endl<<"Area of Triangle is : "<<area<<endl;
        }
};
int main()
{
    polygon p,*ptr;
    rectangel r1;
    ptr = &r1;
    ptr->calculate();
    triangle t1;
    ptr= &t1;
    ptr->calculate();
    return 0;
}
