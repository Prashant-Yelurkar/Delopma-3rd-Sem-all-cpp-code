#include<iostream>
#include<String.h>
using namespace std;
class bank
{
    private:
        char name [20];
        int acc_no;
        float bal,d;
    public:
        bank(char n[],int a,float b)
        {
            strcpy(name, n);
            acc_no = a;
            bal = b;
        }
        void deposit()
        {
            
            cout<<"Original balance :"<<bal<<endl;
            d=bal +10000;
            cout<<"Balance after deposite :"<<d<<endl<<endl;
        }
        void withdraw()
        {
            cout<<"Original Balance :"<<d<<endl;
            float k;
            k= d - 7000;
            cout<<"Balance after Withdraw :"<<k<<endl;
        }
        void display()
        {
            cout<<"Name of Account holder :"<<name<<endl;
            cout<<"Account numbar :"<<acc_no<<endl<<endl;
        }
};
int main()
{
    bank b1("Prashant",202354255, 10245.389);
    b1.display();
    b1.deposit();
    b1.withdraw();
    return 0;
}