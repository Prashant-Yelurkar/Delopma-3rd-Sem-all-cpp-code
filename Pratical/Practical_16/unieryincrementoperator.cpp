#include <iostream>
using namespace std;
class sample
{
    private:
        int a;
    public:
        sample( int x)
        {
            a = x;
        }
        void display()
        {
            cout<<endl<<"\t a =  "<<a<<endl;
        }
        void operator ++()
        {
            a++;
        }
        void operator --()
        {
            a--;
        }
};
int main()
{
    sample s(4);
    cout<<endl<<"Before increment :"<<endl;
    s.display();
    cout<<endl<<"After increment : "<<endl;
    ++s;
    s.display();
    cout<<endl<<"After Decrement : "<<endl;
    --s;
    s.display();
    return 0;
}
