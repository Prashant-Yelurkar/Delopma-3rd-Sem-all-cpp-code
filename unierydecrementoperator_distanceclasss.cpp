#include <iostream>
using namespace std;
class dist
{
    private:
        int feet,inches;
    public:
        dist( int x, int y)
        {
            feet = x;
            inches = y;
        }
        void display()
        {
            cout<<endl<<"\t Feet=  "<<feet<<endl;
            cout<<endl<<"\t inches=  "<<inches<<endl;
        }
        void operator --()
        {
            feet--;
            inches--;
        }
};
int main()
{
    dist d(20, 80);
    cout<<endl<<"Before decrement :"<<endl;
    d.display();
    cout<<endl<<"After decrement  : "<<endl;
    --d;
    d.display();
    return 0;
}
