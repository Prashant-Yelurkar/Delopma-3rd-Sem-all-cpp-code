#include<iostream>
using namespace std;
class Birthday
{
    private:
        int day,year;
        char month[10];
    public:
        void getdata()
        {
            cout<<"Birthday date: ";
            cin>>day;
            cout<<"Birthday month: ";
            cin>>month;
            cout<<"Birthday Year : ";
            cin>>year;
        }
        int showdata()
        {
            cout<<"  "<<day<<" /"<<month<<" /";
            return(year);
            cout<<endl;
        }
};
int main ()
{
    Birthday b[5];
    Birthday *a;

    for (int i=0; i<5 ; i++)
    {
        cout<<endl<<"Enter Birthday Detalis of object "<<i+1<<" :" <<endl;
        a=&b[i];
        a->getdata(); 
    }
    for (int i=0; i<5 ; i++)
    {
        a=&b[i];
        cout<<endl<<"Birthday Detalis of object "<<i+1<<" :"<<a->showdata()<<endl;
    }
}