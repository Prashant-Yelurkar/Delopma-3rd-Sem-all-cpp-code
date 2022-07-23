#include<iostream>
using namespace std;
class Employee
{
    protected:
        int empid;
        char empname[20];
    public:
        void getdata()
        {
            cout<<"Enter Employee ID : ";
            cin>>empid;
            cout<<"Enter Employee Name : ";
            cin>>empname;
        }
        void showdata()
        {
            cout<<endl<<"Employee Nmae : "<<empname<<endl;
            cout<<"Employee Id : "<<empid<<endl;
        }  
};
class emp_info : public Employee
{
    private:
        char dept[20];
        float salary;
    public:
        void accept()
        {
            Employee::getdata();
            cout<<"Enter employee Department: ";
            cin>>dept;
            cout<<"Enter Employee Salary : ";
            cin>>salary;
        }
        void display()
        {
            Employee::showdata();
            cout<<"Department : "<<dept<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
};
int main ()
{
    emp_info e1;
    e1.accept();
    e1.display();
    return 0;
    
}
