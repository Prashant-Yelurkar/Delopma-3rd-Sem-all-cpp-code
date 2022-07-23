#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
        char name[20];
        int roll_no;
        float per;
    public:
        student(char const a[],int b,float c);  
        void display();
};
student::student(char const a[],int b,float c)
{
    strcpy(name ,a);
    roll_no = b;
    per = c;
}
void student ::display()
{
    cout<<"\n\nName :"<<name;
    cout<<"\nRoll no :"<<roll_no;
    cout<<"\nPersentage :"<<per;
}
int main()
{
    student s1("Prashant",40,90.38);
    student s2("Aditya",54, 98.78);
    s1.display();
    s2.display();
    return 0;
}