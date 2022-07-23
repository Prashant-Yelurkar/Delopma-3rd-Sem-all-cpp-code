#include<iostream>
using namespace std;
class city
{
    private:
        char c_name [20];
        int pop;
    public:
        void getdata()
        {
            cout<<endl<<"Enter name of city : ";
            cin>>c_name;
            cout<<"Enter the population of City : ";
            cin>>pop;
            cout<<endl;
        }
        void display()
        {
            cout<<endl<<"City : "<<c_name;
            cout<<endl<<"Population : "<<pop;
            cout<<endl;
        }
};
int main ()
{
    city c[10];
    for (int i =0;i<10;i++)
    {
        c[i].getdata();
    }
    cout<<endl;
    for (int i =0;i<10;i++)
    {
        c[i].display();
    }
    return 0;
}