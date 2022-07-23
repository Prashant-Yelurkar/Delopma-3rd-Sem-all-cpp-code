#include<iostream>
using namespace std;
class Teacher
{
    protected:
        char Name[30];
        int empid;
    public:
    void getdata()
    {
        cout<<"Enter Teacher Info :";
        cout<<endl<<"Enter Teacher name :  ";
        cin>>Name;
        cout<<"Enter Teacher ID :  ";
        cin>>empid;
    }
    void showdata()
    {
        cout<<"Teacher Name : "<<Name<<endl;
        cout<<"Teacher Id : "<<empid<<endl;
    }
};
class Student
{
    protected:
    char sname[30];
    int roll_no;
    public:
    void getdata1()
    {
        cout<<"Enter Student Info :";
        cout<<endl<<"Enter Student Name :  ";
        cin>>sname;
        cout<<"Student Roll no :  ";
        cin>>roll_no;
    }
    void showdata1()
    {
        cout<<"Student Name : "<<sname<<endl;
        cout<<"Student Roll No : "<<roll_no;
    }
};
class Info:public Teacher,public Student
{
    public:
    void accept()
    {
        Teacher::getdata();
        Student::getdata1();
    }
    void display()
    {
        cout<<endl<<endl<<"Teacher Info"<<endl;
        Teacher::showdata();
        cout<<endl<<"Student Info"<<endl;
        Student::showdata1();
    }
};
int main ()
{
    Info i1;
    i1.accept();
    i1.display();
    return 0;
}