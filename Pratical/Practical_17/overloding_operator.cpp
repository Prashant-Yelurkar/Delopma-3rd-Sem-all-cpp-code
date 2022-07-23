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
            cout<<endl<<"\t\t Value of a =  "<<a<<endl;
            cout<<endl<<"\t\t Value of b =  "<<b<<endl;
        }
        void operator ++()
        {
            a++;
            b++;
        }
        void operator --()
        {
            a--;
            b--;
        }
};
int main()
{
    sample s1(20, 80);
    cout<<endl<<"Values of a & b :"<<endl;
    s1.display();
    ++s1;
    cout<<endl<<"Values of a & b after increment :"<<endl;
    s1.display();
    --s1;
    cout<<endl<<"Values of a & b after decrement  :"<<endl;
    s1.display();

    return 0;
}
