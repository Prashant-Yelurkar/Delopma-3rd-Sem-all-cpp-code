#include<iostream>
using namespace std;
class base
{
    public:
        virtual void display()
        {
            cout<<"i am in base class:"<<endl;
        }
        void show()
        {
            cout<<"i am in show fumcton of base class:"<<endl;
        }
};
class derived : public base
{
    public:
        virtual void display()
        {
            cout<<"i am in derived class:"<<endl;
        }
        void show()
        {
            cout<<"i am in derived functon of derived class:"<<endl;
        }
};
int main()
{
    base b1;
    base *ptr;
    ptr=&b1;
    ptr->display();
    ptr->show();

    derived d1;
    ptr=&d1;
    ptr->display();
    ptr->show();
    return 0;
}

