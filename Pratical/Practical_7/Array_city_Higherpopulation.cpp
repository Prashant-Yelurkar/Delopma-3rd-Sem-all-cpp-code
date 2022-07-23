#include<iostream>
using namespace std;
class city
{
    private:
        char c_name [20];
    public:
        int pop;
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
int main()
{
    int n,i,j,temp;
    cout<<"Enter number of city : ";
    cin>>n;
    city c[n];
    for (i=0;i<n;i++)
    {
        c[i].getdata();
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (c[j].pop > c[j+1].pop)
            {
                city temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;

            }
        }
    }
    cout<<endl<<"City with higher population : "<<endl;
    c[n-1].display();
    return 0;
}