#include <iostream>
using namespace std;
class sample
{
    private:
        int a,b;
    public:
        sample( int x, int y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout<<"\t a ="<<a<<endl;
            cout<<"\t b ="<<b<<endl;
        }
        void operator -()
        {
            a = -a;
            b = -b;
        }
};
int main()
{
    sample s(4,5);
    cout<<"Before Nagation :"<<endl;
    s.display();
    cout<<"After Nagation : "<<endl;
    -s;
    s.display();
    return 0;
}
