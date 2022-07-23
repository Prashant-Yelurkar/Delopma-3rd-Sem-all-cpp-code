#include<iostream>
using namespace std;
class rectangle
{
    private:
        float l,b;
    public:
        void accept();
        void display();
};
inline void rectangle :: accept()
{
    cout<<endl<<"Enter Length of rectangle : ";
    cin>>l;
    cout<<"Enter Breadth of rectangel : ";
    cin>>b;
}
inline void rectangle ::display()
{
    float area, perimeter;
    area = l * b;
    perimeter = 2*( l + b);
    cout<<endl<<"Area of rectangle : "<<area<<endl;
    cout<<"Perimeter of rectangle : "<<perimeter;
}
int  main ()
{
    rectangle r1;
    r1.accept();
    r1.display();
    return 0;
}