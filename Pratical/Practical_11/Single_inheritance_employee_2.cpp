//Write a C++ program to define a class  "Employee"  having  data  members emp_no, emp_name and emp_designation. Derive a class "Salary" from "Employee" having data members basic, hra, da, gross_sal. Accept and display data for one employee.
#include<iostream>
using namespace std;
class Employee
{
   protected:
        char emp_name[20];
        int emp_id;
        char emp_desi[10];
    public:
        void getdata()
        {
            cout<<endl<<"Employee Details :"<<endl;
            cout<<endl<<"Enter Employee Name : ";
            cin>>emp_name;
            cout<<"Enter Emp_Id : ";
            cin>>emp_id;
            cout<<"Enter Desigination : ";
            cin>>emp_desi;
        }
        void showdata()
        {
            cout<<endl<<"Name : "<<emp_name<<endl;
            cout<<"Emp Id : "<<emp_id<<endl;
            cout<<"Desigination : "<<emp_desi<<endl;
        }
};
class salary: public Employee
{
    private:
        float basic, hra, da, gross_sal;
    public:
        void getdata1()
        {
            Employee::getdata();
            cout<<endl<<"Salary Details : "<<endl<<endl;
            cout<<"Enter Basic salary : ";
            cin>>basic;
            cout<<"Enter HRA : ";
            cin>>hra;
            cout<<"Enter DA : ";
            cin>>da;
            cout<<"Enter Gross Salary : ";
            cin>>gross_sal;
        }
        void shoedata1()
        {
            Employee::showdata();
            cout<<"Basic salary : "<<basic<<endl;
            cout<<"HRA : "<<hra<<endl;
            cout<<"DA : "<<da<<endl;
            cout<<"Grass Salary : "<<gross_sal<<endl;
        }
};
int main()
{
    salary s1;
    s1.getdata1();
    cout<<endl<<endl<<"Employee Details : "<<endl;
    s1.shoedata1();
}
