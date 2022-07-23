#include<iostream>
using namespace std;
class person
{
    protected:
        char Name[30];
        char gender[5];
        int age;
    public:
    void getdata()
    {
        cout<<"Enter Person Details : "<<endl;
        cout<<"Enter Name : ";
        cin>>Name;
        cout<<"Enter Gendr :";
        cin>>gender;
        cout<<"Enter Age :";
        cin>>age;
    }
    void showdata()
    {
        cout<<endl<<endl<<"Person Details: "<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Gender :"<<gender<<endl;
        cout<<"Age :"<<age<<endl;
    }
};
class employee: public person
{
    protected:
        int emp_id;
        char company[20];
        float salary;
    public:
    void getdata1()
    {
        person::getdata();
        cout<<endl<<"Enter Employee Details :"<<endl;
        cout<<"Enter id : ";
        cin>>emp_id;
        cout<<"Enter Company : ";
        cin>>company;
        cout<<"Enter Salary : ";
        cin>>salary;
    }
    void shodata1()
    {
        person::showdata();
        cout<<"Employee id : "<<emp_id<<endl;
        cout<<"Company Name: "<<company<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
class programer:public employee
{
    private:
        int no_of_prog_lang_know;
    public:
        void getdata2()
        {
            employee::getdata1();
            cout<<endl<<"Enter No of Langiuage You know : ";
            cin>>no_of_prog_lang_know;
        }
        void showdata2()
        {
            employee::shodata1();
            cout<<"No of Langiuage Know : "<<no_of_prog_lang_know<<endl;
        }
};
int main()
{
    programer p;
    p.getdata2();
    p.showdata2();
    return 0;
}