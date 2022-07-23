
#include<iostream>
using namespace std;
class account
{
    private:
        float principle;
        float rate_interest;
        float years;
        float si;
    public:
        void accept()
        {
            cout<<"\nEnter your Principle :";
            cin>>principle;
            cout<<"Enter your Interest ::";
            cin>>rate_interest;
            cout<<"Enter no of Years : :";
            cin>>years; 
        }
        void calculate()
        {
            si=((principle * rate_interest * years)/100);
        }
        void display()
        {
            cout<<"\nYour total Simple interest is :"<<si;
        }
           
};      
int main()
{
   account a1;
   a1.accept();
   a1.calculate();
   a1.display();
   return 0;
}
