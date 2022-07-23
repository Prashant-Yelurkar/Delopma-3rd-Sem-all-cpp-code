#include<iostream>
using namespace std;
class employee
{
    protected:
        char Emp_name[20];
        char Emp_id[10];
    public:
        void getdata()
        {
            cout<<"Enter Employee Name : ";
            cin>>Emp_name;
            cout<<"Enter Employee ID : ";
            cin>>Emp_id;
        }
        void showdata()
        {
            cout<<endl<<"Employee Name : "<<Emp_name;
            cout<<endl<<"Employee ID : "<<Emp_id;
        }
};
class worker:public employee
{
    private:
        float overtime_salary;
    public:
        void getdata1()
        {
            cout<<endl<<"Worker Details: "<<endl;
            employee::getdata();
            cout<<endl<<"Overtime salary : ";
            cin>>overtime_salary;
        }
        void showddata1()
        {
            cout<<endl<<"Worker Details: "<<endl;
            employee::showdata();
            cout<<endl<<"Ovetime salary : "<<overtime_salary;
        }
};
class manager:public employee
{
    public:
        void getdata2()
        {
            cout<<endl<<"Manager Details: "<<endl;
            employee::getdata();
        }
        void showddata2()
        {
            cout<<endl<<endl<<"Manager Details: "<<endl;
            employee::showdata();
        }
};
int main ()
{
    worker w1;
    w1.getdata1();
    manager m1;
    m1.getdata2();
    w1.showddata1();
    m1.showddata2();
    return 0;
}