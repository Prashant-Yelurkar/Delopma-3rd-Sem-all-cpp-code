#include<iostream>
using namespace std;
class person
{
    private:
            char name[10];
            int age ;
            float salary;
        
    public:
        void accept()
        {
            cout<<"Enter Your Name :";
            cin>>name;
            cout<<"Enter Your Age :";
            cin>>age;
            cout<<"Enter Youe Salary :";
            cin>>salary;
        }
        void display()
        {
            cout<<"\nYour Name is :"<<name<<endl;
            cout<<"Your Age is  :"<<age<<endl;
            cout<<"Your Salary is:"<<salary<<endl;
        }
};
int main()
{
person p1;
p1.accept();
p1.display();
}