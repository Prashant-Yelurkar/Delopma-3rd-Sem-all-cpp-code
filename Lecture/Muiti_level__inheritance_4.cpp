#include<iostream>
using namespace std;
class Carmanufacturer
{
    protected:
        char name[20];
    public:
        void getdata()
        {
            cout<<endl<<"Car manufacture Details: "<<endl;
            cout<<"Enter name of car manufacturer Company : ";
            cin>>name;
        }
        void showdata()
        {
            cout<<endl<<"Car Manufacture Details : "<<endl;
            cout<<"Company Name : "<<name<<endl;
        }
};
class Carmodel:public Carmanufacturer
{
    protected:
        char model_name[20];
        char model_no[10];
    public:
        void getdata1()
        {
            Carmanufacturer::getdata();
            cout<<endl<<"Car model Details : "<<endl;
            cout<<"Enter model name : ";
            cin>>model_name;
            cout<<"Enter model no. : ";
            cin>>model_no;
        }
        void showdata1()
        {
            Carmanufacturer::showdata();
            cout<<"Model Name : "<<model_name<<endl;
            cout<<"Model No : "<<model_no<<endl;
        }
};
class car :public Carmodel
{
    private:
        char color [10];
        char car_no[10];
    public:
        void getdata2()
        {
            Carmodel::getdata1();
            cout<<endl<<"Car Details : "<<endl;
            cout<<"Enter Car no : ";
            cin>>car_no;
            cout<<"Enter Color of car : ";
            cin>>color;
        }
        void showdata2()
        {
            Carmodel::showdata1();
            cout<<"Car No : "<<car_no<<endl;
            cout<<"Car color : "<<color<<endl;
        }
};
int main()
{
    car c1;
    c1.getdata2();
    c1.showdata2();
    return 0;
}