#include<iostream>
using namespace std;
class Employee
{
    private:
        int emp_id;
        char emp_name[20];
        float emp_salary;
    public:
        void accept()
        {
            cout<<endl<<"Enter Employee ID : ";
            cin>>emp_id;
            cout<<"Enter Employee Name : ";
            cin>>emp_name;
            cout<<"Enter Employee salary :";
            cin>>emp_salary;
        }
        void display()
        {
            if (emp_salary >= 25000)
            {
                cout<<endl<<"Employee ID : "<<emp_id<<endl;
                cout<<"Employee Name : "<<emp_name<<endl;
                cout<<"Employee salary : "<<emp_salary<<endl;
                cout<<endl;
            }
        }
};
int main ()
{
    int i,n;
    cout<<endl<<"How many employees are there :";
    cin>>n;
    Employee e[n];
    for(i=0;i<n;i++)
    {
        e[i].accept();
    }
    cout<<endl<<"Name of Employees having salary greter than 25000 ."<<endl;
    for(i=0;i<n;i++)
    {
        e[i].display();
    }
    return 0;
}