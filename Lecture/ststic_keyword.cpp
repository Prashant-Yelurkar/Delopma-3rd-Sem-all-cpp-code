#include<iostream>
using namespace std;
class dept
{
    private:
        char name[20],roll_no[10];
        float per;
        static char class_name[10];
    public:
        void input()
        {
            cout<<"Enter Class of Student :";
            cin>>class_name;
        }
        void accept()
        {
            cout<<"Student Name :";
            cin>>name;
            cout<<"Student Roll no :";
            cin>>roll_no;
            cout<<"Percentage :";
            cin>>per;
        }
        void display()
        {
            cout<<"\nNameClass :"<<class_name;
            cout<<"\nStudent Name :"<<name;
            cout<<"\nRoll No :"<<roll_no;
            cout<<"\nPercentage :"<<per<<endl;
        }
};
char dept::class_name[10];
int main()
{
    dept d1,d2,d3;
    d1.input();
    d1.accept();
    d2.accept();
    d3.accept();
    
    d1.display();
    d2.display();
    d3.display();
    return 0;
}