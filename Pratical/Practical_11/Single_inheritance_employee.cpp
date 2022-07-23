#include<iostream>
using namespace std;
class employee
{
    protected:
        char name[20];
        int emp_id;
    public:
        void getdata()
        {
            cout<<endl<<"Employee Details :"<<endl;
            cout<<endl<<"Employee Name : ";
            cin>>name;
            cout<<"Emp_Id : ";
            cin>>emp_id;
        }
        void showdata()
        {
            cout<<endl<<"Name : "<<name<<endl;
            cout<<"Emp Id : "<<emp_id<<endl;
        }
};
class emp_info:public employee
{
    private:
        float basic_salary;
    public:
        void gatdata2()
        {
            employee::getdata();
            cout<<"Basic Salary  : ";
            cin>>basic_salary;
        }
        void showdata2()
        {
            employee::showdata();
            cout<<"Basic Salery : "<<basic_salary<<endl;
        }
};
int main ()
{
    emp_info e1;
    e1.gatdata2();
    cout<<endl<<"Employee Details :"<<endl;
    e1.showdata2();
    return 0;
}