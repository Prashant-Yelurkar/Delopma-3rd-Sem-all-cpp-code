#include <iostream>
using namespace std;
class Area
{
    public:
        int area(int length, int breadth)
    {
        return (length * breadth);
    }
};
class Perimeter
{
    public:
    int perimeter(int length, int breadth)
    {
        return(2 * length + 2 * breadth);
    }
};
class Rectangle : public Area, public Perimeter
{
    private:
        int length,  breadth;
    public:
        void get_data()
        {
            cout<<endl<<"Enter length of Rectangle : ";
            cin>>length;
            cout<<"Enter breadth of Rectangle : ";
            cin>>breadth;
        }

        void display()
        {
            cout<<endl<<"Rectangle length : "<<length<<endl;
            cout<<"Rectangle breadth : "<<breadth<<endl;
            cout<<"Rectangle area : "<<area(length, breadth)<<endl;
            cout<<"Rectangle perimeter : "<<perimeter(length, breadth)<<endl;
        }
};
int main()
{
    Rectangle R;
    R.get_data();
    R.display();
    return 0;
}