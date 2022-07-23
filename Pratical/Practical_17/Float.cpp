#include<iostream>
using namespace std;
#include<stdio.h>
class Check
{
private:
float x;
public:
void setData(int a)
{
x=a;
}
void getData()
{
cout<<"\nx:"<<x<<endl<<endl;
}

//Defining an operator function + to overload
Check operator +(Check c)
{
Check temp;
temp.x=x+c.x;
return temp;
}

//Defining an operator function - to overload
Check operator -(Check c)
{
Check temp;
temp.x=x-c.x;
return temp;
}
//Defining an operator function * to overload
Check operator *(Check c)
{
Check temp;
temp.x=x*c.x;
return temp;
}

//Defining an operator function / to overload
Check operator /(Check c)
{
Check temp;
temp.x=x/c.x;
return temp;
}
};

int main()
{

Check c1,c2,c3,c4,c5,c6;
c1.setData(20);
c2.setData(10);

//Overloading operator +
c3=c1+c2;
cout<<"After addition";
c3.getData();

//Overloading operator -
c4=c1-c2;
cout<<"After Sbstraction";
c4.getData();

//Overloading operator *
c5=c1*c2;
cout<<"After Multiplication";
c5.getData();

//Overloading operator /
c6=c2/c1;
cout<<"After division";
c6.getData();
}