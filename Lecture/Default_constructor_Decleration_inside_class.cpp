#include<iostream>
using namespace std;
class student
{
    private:
        int roll_no;
        char name[20];
    public:
        student()
        {
            cout<<"Enter Name :";
            cin>>name;
            cout<<"Enter Roll no  :";
            cin>>roll_no;
        }
        void putdata()
        {
            cout<<"Name :"<<name;
            cout<<"\nRoll no :"<<roll_no;
        }
};
int  main()
{
    student s1;
    s1.putdata();
    return 0;
}