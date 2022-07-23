#include<iostream>
using namespace std;
class Student
{
    protected:
        char name[20];
        int roll_no;
    public:
        void getdata()
        {
            cout<<endl<<"Student Details :"<<endl;
            cout<<endl<<"Student Name : ";
            cin>>name;
            cout<<"Roll No : ";
            cin>>roll_no;
        }
        void showdata()
        {
            cout<<endl<<"Name : "<<name<<endl;
            cout<<"Roll No : "<<roll_no<<endl;
        }
};
class marks:public Student
{
    private:
        int m1, m2, m3;
        float per ,total;
    public:
        void gatdata2()
        {
            Student::getdata();
            cout<<"Enter Marks 1 : ";
            cin>>m1;
            cout<<"Enter Marks 2 : ";
            cin>>m2;
            cout<<"Enter Marks 3 : ";
            cin>>m3;
        }
        void showdata2()
        {
            Student::showdata();
            total = (m1 + m2 + m3);
            per = (total/300)*100;
            cout<<"Total Marks : "<<total<<endl;
            cout<<"Percentage : "<<per<<endl;
        }
};
int main ()
{
    marks m1;
    m1.gatdata2();
    m1.showdata2();
    return 0;
}