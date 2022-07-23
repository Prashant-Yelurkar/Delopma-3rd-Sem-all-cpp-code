#include<iostream>
using namespace std;
class student
{
    protected:
        char s_name[30];
        char roll_no[10];
    public:
        void getdata()
        {
            cout<<"Student Details: "<<endl;
            cout<<"Enter Name : ";
            cin>>s_name;
            cout<<"Enter Roll No : ";
            cin>>roll_no;
        }
        void showdata()
        {
            cout<<endl<<endl<<"Student Details: "<<endl;
            cout<<"Name : "<<s_name<<endl;
            cout<<"Roll No : "<<roll_no<<endl;
        }
};
class test:public student
{
    protected:
        int pt1,pt2,t;
    public:
        void getdata1()
        {
            student::getdata();
            cout<<"Enter PT1 marks : ";
            cin>>pt1;
            cout<<"Enter PT2 Marks : " ;
            cin>>pt2;
            cout<<"total marks of paper : ";
            cin>>t;
        }
        void showdata1()
        {
            student::showdata();
            cout<<"PT1 Marks : "<<pt1<<endl;
            cout<<"PT2 Marks : "<<pt2<<endl;
        }
};
class result:public test
{
    private:
        float total;
        float per;
    public:
        void accept()
        {
            test::getdata1();
            total = pt1 + pt2;
            per = total / t *  100;

        }
        void display()
        {
            test::showdata1();
            cout<<"Total Marks : "<<total<<endl;
            cout<<"percentage : "<<per;
        }
};
int main ()
{
    result r1;
    r1.accept();
    r1.display();
    return 0;
}