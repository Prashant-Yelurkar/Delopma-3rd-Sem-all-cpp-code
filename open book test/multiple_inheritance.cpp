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
            cout<<endl<<endl<<"Employee Details :"<<endl;
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
class emp_union
{
    protected:
        char member_id[20];
    public:
        void getdata1()
        {
            cout<<endl<<"Member Details :"<<endl;
            cout<<"Enter Member ID : ";
            cin>>member_id;
        }
        void showdata1()
        {
            cout<<"Member ID : "<<member_id<<endl;
        }
};
class emp_info:public employee , public emp_union
{
    private:
        float basic_salary;
    public:
        void getdata2()
        {
            employee::getdata();
            emp_union::getdata1();
            cout<<endl<<"Employee Details :"<<endl;
            cout<<"Enter Employee Salary : ";
            cin>> basic_salary;
        }
        void showdata2()
        {
            cout<<endl<<endl<<"Employee Information : "<<endl;
            employee::showdata();
            emp_union::showdata1();
            cout<<"Enter Employee Salary : "<< basic_salary<<endl;
        }
};
int main ()
{
    emp_info e1;
    e1.getdata2();
    e1.showdata2();
    return 0;
}