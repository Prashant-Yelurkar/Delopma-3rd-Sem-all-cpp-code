#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    private:
        float var1,var2;
    public:
        void getdata()
        {
            cout<<endl<<"Enter First Number : ";
            cin>>var1;
            cout<<"Enter second Number : ";
            cin>>var2;
        }
        friend float mean(sample s1);
};
float mean(sample s1)
{
    return float(s1.var1 + s1.var2)/2;
}
int main()
{
    sample s1;
    s1.getdata();
    cout<<endl<<"Mean of two number is : "<<mean(s1);
    return 0;
}