#include<iostream>
using namespace std;
class person
{
    protected:
        char name[30];
        char gender[10];
        int age ;
    public:
        void getdata()
        {
            cout<<"Person Details :\n";
            cout<<"Enter Name of Person : ";
            cin>>name;
            cout<<"Enter Gender : ";
            cin>>gender;
            cout<<"Enter age of Person : ";
            cin>>age;
        }
        void showdata()
        {
            cout<<endl<<"Person Details: "<<endl<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"gender : "<<gender<<endl;
            cout<<"Age : "<<age<<endl;

        }
};
class employee:public person
{
    protected:
        char emp_id [10];
        char c_name[30];
        float salary;
    public:
        void getdata1()
        {
            person::getdata();
            cout<<"Enter emp_id : ";
            cin>>emp_id;
            cout<<"Company name : ";
            cin>>c_name;
            cout<<"Salary : ";
            cin>>salary;
        }
        void showdata1()
        {
            person::showdata();
            cout<<"Emp_ID : "<<emp_id<<endl;
            cout<<"Comapany Nmae : "<<c_name<<endl;
            cout<<"Salary : "<<salary<<endl;
        }
};
class programmer:public employee
{
    private:
    int no_of_prog_lang_known;
    public:
    void accept()
    {
        employee::getdata1();
        cout<<"Enter No. of language u known :";
        cin>>no_of_prog_lang_known;
    }
    void display()
    {
        employee::showdata1();
        cout<<"Language Known : "<<no_of_prog_lang_known<<endl;
    }
} ;
int main ()
{
    programmer p1;
    p1.accept();
    p1.display();
    return 0;
}