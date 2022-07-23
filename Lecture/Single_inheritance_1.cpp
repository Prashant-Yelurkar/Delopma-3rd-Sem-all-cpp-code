#include<iostream>
using namespace std;
class collage
{
    protected:
        int collage_code;
        char collage_name[20];
    public:
        void getcollage()
        {
            cout<<endl<<"Collage Details : "<<endl;
            cout<<"Enter collage Name : ";
            cin>>collage_name;
            cout<<endl<<"Enter Collage code : " ;
            cin>>collage_code;
        }
        void showcollage()
        {
            cout<<"Collage Nmae : "<<collage_name<<endl;
            cout<<"Collage code : "<<collage_code<<endl;
        }
};
class Student : public collage
{
    protected:
        char roll_no[10];
        char sname[20];
    public:
        void getstudent()
        {
            collage::getcollage();
            cout<<endl<<"Student details : "<<endl;
            cout<<endl<<"Enter Student Name : ";
            cin>>sname;
            cout<<"Enter student roll no : ";
            cin>>roll_no;
        };
        void showstudent()
        {
            collage::showcollage();
            cout<<"Student Name : "<<sname<<endl;
            cout<<"Student Roll no : "<<roll_no;
        }
};
int main()
{
    Student s1;
    s1.getstudent();
    s1.showstudent();
    return 0;
}