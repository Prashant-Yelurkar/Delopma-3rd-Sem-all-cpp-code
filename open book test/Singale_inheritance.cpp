#include<iostream>
using namespace std;
class employee
{
    protected:
        char empname[20];
        char empid[10];
    public:
        void getdata()
        {
            cout<<"Enter Employee Name : ";
            cin>>empname;
            cout<<"Enter Employee ID : ";
            cin>>empid;
        }
        void showdata()
        {
            cout<<endl<<"Employee Name : "<<empname;
            cout<<endl<<"Employee ID : "<<empid<<endl;
        }
};
class emp_info:public employee
{
    private:
        char dept[20];
        float salary;
    public:
        void getdata1()
        {
            cout<<endl<<"Employee Information : "<<endl;
            employee::getdata();
            cout<<"Enter Employee Department : ";
            cin>>dept;
            cout<<"Enter Employee Salary : ";
            cin>>salary;
        }
        void showdata1()
        {
            cout<<endl<<endl<<"Employee Information : "<<endl;
            employee::showdata();
            cout<<"Enter Employee Department : "<<dept<<endl;
            cout<<"Enter Employee Salary : "<<salary<<endl;
        }
};
int main ()
{
    emp_info e1;
    e1.getdata1();
    e1.showdata1();
    return 0;
}