#include<iostream>
using namespace std;
class Student
{
    protected:
        char name[20];
        char roll_no[10];
    public:
        void Sgetdata()
        {
            cout<<endl<<endl<<"Student Details : "<<endl;
            cout<<"Enter Student Name : ";
            cin>>name;
            cout<<"Enter Student Roll no : ";
            cin>>roll_no;
        }
        void Sshoedata()
        {
            cout<<endl<<"Student Name :"<<name;
            cout<<endl<<"Student Roll No : "<<roll_no;
        }
};
class Test:public Student
{
    protected:
        int m1,m2;
    public:
        void Tgetdata()
        {
            Student::Sgetdata();
            cout<<endl<<endl<<"Test Details : ";
            cout<<endl<<"Enter Marks of Test 1 :";
            cin>>m1;
            cout<<"Enter Markd of Test 2 : ";
            cin>>m2;
        }
        void Tshowdata()
        {
            Student::Sshoedata();
            cout<<endl<<"Test 1 Marks : "<<m1;
            cout<<endl<<"Test 2 Marks : "<<m2;
        }
};
class Sport
{
    protected:
        float score;
    public:
        void Spgetdata()
        {
            cout<<endl<<endl<<"Sport Details : ";
            cout<<endl<<"Enter the Total Score : ";
            cin>>score;
        }
        void Spshowdata()
        {
            cout<<endl<<"Sport Score : "<<score;
        }
};
class Result:public Test,public Sport
{
    private:
        float total;
    public:
        void Rdisplay()
        {
            Test::Tgetdata();
            Sport::Spgetdata();
            cout<<endl<<"Student Details : "<<endl;
            Test::Tshowdata();
            Sport::Spshowdata();
            total = m1 + m2 + score;     
            cout<<endl<<"Total Score : "<<total;
        }
};
int main()
{
    Result R1;
    R1.Rdisplay();
    return 0;
}