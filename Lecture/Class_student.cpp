#include<iostream>
using namespace std;
class student
{
    private:
        char name[20],roll_no[10];
    public:
         void accept()
        {
            cout<<"Student Name :";
            cin>>name;
            cout<<"Student Roll no :";
            cin>>roll_no;
        }
        void display()
        {
            cout<<"\nStudent Name :"<<name;
            cout<<"\nRoll No :"<<roll_no;
        }
};
int main()
{
    student s1;
    s1.accept();
    s1.display();
    return 0;
}