#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
        char roll_no[10],name[20], course[30];
    public:
        student(char a[], char b[], char* c ="Information Technology")
        {
            strcpy(roll_no, a);
            strcpy(name, b);
            strcpy(course, c);
        }
        void display()
        {
            cout<<endl<<endl<<"Student details : ";
            cout<<endl<<endl<<"Student Name : "<<name;
            cout<<endl<<"Student roll no : "<<roll_no;
            cout<<endl<<"Course : "<<course;
        }
};
int main()
{
    student s1("38", "Konisha");
    student s2("40", "Prashant");
    student s3("47", "Niriksha");
    student s4("54", "Aditya");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}