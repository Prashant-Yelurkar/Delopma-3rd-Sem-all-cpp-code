#include<iostream>
using namespace std;
class test2;
class test1
{
    private:
        float m1,m2;
    public:
        void get(float a,float b)
        {
            m1=a;
            m2=b;
        }
        friend void average(test1,test2);
};
class test2
{
    private:
        float m3,m4;
    public:
        void get(float a,float b)
        {
            m3=a;
            m4=b;
        }
        friend void average(test1,test2);
};
void average(test1 t1, test2 t2)
{
    float avg;
    avg = (( t2.m3 + t2.m4 + t1.m1 + t1.m2)/4);
    cout<<endl<<"Average : "<<avg;
}
int main()
{
    test1 t1;
    test2 t2;
    t1.get(20,30);
    t2.get(20,30);
    average(t1,t2);
    return 0;
}
