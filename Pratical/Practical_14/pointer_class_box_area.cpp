#include<iostream>
using namespace std;
class box
{
    private:
        float l,b,h;
    public:
        void getdata()
        {
            cout<<endl<<"Enter Box detalis : "<<endl;
            cout<<endl<<"Enter Box length : ";
            cin>>l;
            cout<<"Enter Box breadth : ";
            cin>>b;
            cout<<"Enter Box Height : ";
            cin>>h;
        }
        void calculation()
        {
            float area,volume;
            area = 2*(l*b + b*h + l*h);
            volume = (l*b*h);

            cout<<endl<<"Area Of Box : "<<area<<endl;
            cout<<"Volume Of Box "<<volume<<endl;
        }
};
int main()
{
    box b;
    box *p;
    p = &b;
    p->getdata();
    p->calculation();
    return 0;
}