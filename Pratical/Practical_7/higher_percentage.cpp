//Write a program to declare a class student containing data members roll_no and precentage. Accept this data for 2 objects and display the roll_no of the student having higher percentage
#include<iostream>
using namespace std;
class student
{
    private:
        char s_name[30];
        char roll_no[15];
    public:
        float per;
        void accept()
        {
            cout<<endl<<"Enter Student name :";
            cin>>s_name;
            cout<<"Enter student roll number :";
            cin>>roll_no;
            cout<<"Enter student percentage : ";
            cin>>per;
        }
        void display()
        {
            cout<<endl<<"Student with higher Percentage :";
            cout<<endl<<"Student Name : "<<s_name<<endl;
            cout<<"Roll no: "<<roll_no<<endl;
            cout<<"Percentage : "<<per<<"%"<<endl;
        }
};
int main()
{
    student s1,s2;
    s1.accept();
    s2.accept();
    if (s1.per<s2.per)
    {
        s2.display();
    }
    else
    {

        s1.display();
    }
    return 0;
}