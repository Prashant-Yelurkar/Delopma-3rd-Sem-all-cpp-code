#include<iostream>
using namespace std;
class  Dept
{
    private:
        char name[30];
        char roll_no[10];
        float per;
        static char class_name[10];
    public:
        void input()
        {
            cout<<endl<<endl<<"Enter class of student : ";
            cin>>class_name;
        }
        void getdata()
        {
            cout<<endl<<"Enter Student name : ";
            cin>>name;
            cout<<"Enter Student roll no : ";
            cin>>roll_no;
            cout<<"Enter Student Percentage : ";
            cin>>per;
        }
        void showdata()
        {
            cout<<"Class Name : "<<class_name<<endl;
            cout<<"Student Name : "<<name<<endl;
            cout<<"Roll No : "<<roll_no<<endl;
            cout<<"Percentage : "<<per<<endl<<endl;
        }
};
char Dept::class_name[10];
int main()
{
    Dept d1,d2;
    d1.input();
    d1.getdata();
    d2.getdata();
    cout<<endl<<"Student Details : "<<endl<<endl;
    d1.showdata();
    d2.showdata();
    return 0;

}