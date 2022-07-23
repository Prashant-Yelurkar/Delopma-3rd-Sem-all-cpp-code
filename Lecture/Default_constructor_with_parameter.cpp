//class of student
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
        int r;
        char n[20];
        char cours[20];
    public:
        student(int a,char b[20],char d[20]="Information_Technology")
        {
            r=a;
            strcpy(n,b);
            strcpy(cours,d);
        }
        void display()
        {
            cout<<"Name :"<<n<<endl;
            cout<<"ROLL no:"<<r<<endl;
            cout<<"Cours :"<<cours<<endl<<endl;
        }
};
int main()
{
    student s1(40,"Prashant");
    student s2(38,"Konisha");
    s1.display();
    s2.display();
    return 0;
}