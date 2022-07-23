#include<iostream>
using namespace std;
class num2;
class num1
{
    private:
        float a;
    public:
        void getdata()
        {
            cout<<endl<<"Enter First number : ";
            cin>>a;
        }
        friend void swap(num1,num2);
};
class num2
{
    private:
        float b;
    public:
        void getdata()
        {
            cout<<endl<<"Enter second number : ";
            cin>>b;
        }
        friend void swap(num1,num2);
};
void swap( num1 n1,num2 n2)
{
    int temp;
    temp = n1.a;
    n1.a = n2.b;
    n2.b = temp;
    cout<<endl<<"Value of First number & second number after swapping : "<<endl;
    cout<<"First number : "<<n1.a<<endl;
    cout<<"Second number : "<<n2.b<<endl;
}
int main()
{
    num1 n1;
    num2 n2;
    n1.getdata();
    n2.getdata();
    swap(n1,n2);
    return 0;
}
