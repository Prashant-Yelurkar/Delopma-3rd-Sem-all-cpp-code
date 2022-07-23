#include<iostream>
using namespace std;
class Account
{
    protected:
        char name[20];
        int acc_no;
    public:
        virtual void getdata()
        {
            cout<<endl<<endl<<"Account holder details : ";
            cout<<endl<<"Name :  ";
            cin>>name;
            cout<<"Enter Account no :";
            cin>>acc_no;
        }
        virtual void showdata()
        {
            cout<<endl<<"Name : "<<name<<endl;
            cout<<"Account No :"<<acc_no<<endl;
        }
};
class saving_account: virtual public Account
{
    protected:
        float saving_bal;
    public:
        void getdata1()
        {
            Account::getdata();
            cout<<endl<<endl<<"Saving Account Details : "<<endl;
            cout<<"Enter saving acc Balance : ";
            cin>>saving_bal;
        }
        void showdata1()
        {
            Account::showdata();
            cout<<"Saving Account Balance : "<<saving_bal<<endl;
        }
};
class current_account: virtual public Account
{
    protected:
        float current_bal;
    public:
        void getdata2()
        {
            Account::getdata();
            cout<<endl<<endl<<"Current Account Details : "<<endl;
            cout<<"Enter Current acc Balance : ";
            cin>>current_bal;
        }
        void showdata2()
        {
            Account::showdata();
            cout<<"Current Account Balance : "<<current_bal<<endl;
        }
};
class balance:public saving_account, public current_account
{
    private:
        float total;
    public:
        void getdata3()
        {
            saving_account::getdata1();
            current_account::getdata2();
            total = saving_bal + current_bal;
        }
        void showdata3()
        {
            saving_account::showdata1();
            current_account::showdata2();
            cout<<"Total Balance : "<<total;
        }
};
int main()
{
    balance b1;
    b1.getdata3();
    cout<<endl<<endl<<"Account holder Details : "<<endl;
    b1.showdata3();
    return 0;
}
