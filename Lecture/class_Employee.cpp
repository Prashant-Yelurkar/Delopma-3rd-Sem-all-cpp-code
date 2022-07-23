#include<iostream>
using namespace std;
class employee
{
    private:
            char name[10];
            int emp_id ;
            char desg [10];
        
    public:
        void accept()
        {
            cout<<"Enter Your Name :";
            cin>>name;
            cout<<"Enter Your ID.no :";
            cin>>emp_id;
            cout<<"Enter Youe Designation :";
            cin>>desg;
        }
        void display()
        {
            cout<<"\nYour Name is :"<<name<<endl;
            cout<<"Your ID.no is :"<<emp_id<<endl;
            cout<<"Your Designation is:"<<desg<<endl;
        }
};
int main()
{
employee e1;
e1.accept();
e1.display();
}