#include<iostream>
using namespace std;
class Distance
{
    private:
        float meter1,meter2;
    public:
        void getdata()
        {
            cout<<endl<<"Enter First distance : ";
            cin>>meter1;
            cout<<endl<<"Enter second distance : ";
            cin>>meter2;
        }
        friend float add(Distance d1);
};
float add(Distance d1)
{
    return int(d1.meter1 + d1.meter2);
}
int main()
{
    Distance d1;
    d1.getdata();
    cout<<endl<<"Addition is : "<<add(d1);
    return 0;
}