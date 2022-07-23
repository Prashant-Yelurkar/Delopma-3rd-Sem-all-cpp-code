#include<iostream>
#include<conio.h>
using namespace std;
class staff
{
    private:
        char name[20];
        float salary,gross_salary,DA,HRA;;
    public:
        void accept()
        {
            cout<<"Enter Your Name :";
            cin>>name;
            cout<<"Basic salary :";
            cin>>salary;
        }
        void calculate()
        {
           
            DA = salary*(74.5/100);
            HRA = salary*30/100;
            gross_salary = salary + DA + HRA;
        }
        void display()
        {
            cout<<endl<<"Name of Employee :"<<name<<endl;
            cout<<"DA :"<<DA<<endl;
            cout<<"HRA :"<<HRA<<endl;
            cout<<"Gross salary :"<<gross_salary<<endl;
        }
};
int main ()
{
    staff s1;
    cout<<endl;
    s1.accept();
    s1.calculate();
    s1.display();
    cout<<endl;
    return 0;
}
