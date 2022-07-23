#include<iostream>
using namespace std;
class cricketer
{
    protected:
        char name[20];
        int age;
        int no;
    public:
        void getdata()
        {
            cout<<endl<<"Enter Circketer data :"<<endl;
            cout<<endl<<"Enter Name : ";
            cin>>name;
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter Number : ";
            cin>>no;
        }
        void showdata()
        {
            cout<<endl<<"Name  :"<<name<<endl;
            cout<<"Age : "<<age<<endl;
        }
};
class Bowler:virtual public cricketer
{
    protected:
        int wickets;
    public:
        void getdata1()
        {
            cricketer::getdata();
            cout<<"Enter Total wickets : ";
            cin>>wickets;
        }
        void showdata1()
        {
            cricketer::showdata();
            cout<<"Total Wicikets : "<<wickets<<endl;
        }
};
class Batsman:virtual public cricketer
{
    protected:
        int runs;
    public:
        void getdata2()
        {
            cricketer::getdata();
            cout<<"Enter Total Runs :";
            cin>>runs;
        }
        void showdata2()
        {
            cricketer::showdata();
            cout<<"Total Runs :"<<runs<<endl;
        }
};
class Allrounder:virtual public Bowler,virtual public Batsman
{
    public:
        void getdata3()
        {
            Bowler::getdata1();
            Batsman::getdata2();
        }
        void showdata3()
        {
            Bowler::showdata1();
            Batsman::showdata2();
        }
};
int main()
{
    Allrounder a1;
    a1.getdata3();
    a1.showdata3();
    return 0;
}