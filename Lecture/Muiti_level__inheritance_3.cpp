#include<iostream>
using namespace std;
class collage
{
    protected:
        int collage_code;
    public:
        void getcollage()
        {
            cout<<endl<<"Collage Details : "<<endl;
            cout<<endl<<"Enter Collage code : " ;
            cin>>collage_code;
        }
};
class Student : public collage
{
    protected:
        char roll_no[10],name[20];
    public:
        void getstudent()
        {
            collage::getcollage();
            cout<<endl<<"Student details : "<<endl;
            cout<<endl<<"Enter Student Name : ";
            cin>>name;
            cout<<"Enter student roll no : ";
            cin>>roll_no;
        };
};
class Result: public Student
{
    private:
        char grade;
    public:
        void getresult()
        {
            Student::getstudent();
            cout<<endl<<"Grade : "<<endl;
            cout<<endl<<"Enter Grade : ";
            cin>>grade;
        }
};
int main ()
{
    Result R1;
    R1.getresult();
    return 0;
}