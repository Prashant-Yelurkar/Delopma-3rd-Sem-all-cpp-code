#include<iostream>
using namespace std;
class complex
{
    private: 
    float real, img;
    
    public: 
        complex()
        {
            real = 0;
            img = 0.0;
        }
        complex (float r, float i)
        {
            real = r;
            img  = i;
        }
        void operator +(complex c2)
        {
            complex temp;
            temp.real=real+c2.real;
            temp.img=img+c2.img;
            cout<<temp;
        }
        void display()
        {
            cout<<real<<" + "<<img<<endl;
        }
        
};
 
int main()
{
    complex c1(1.2,2.3),c2(1.2,2.3),c3;
    c3= c1+ c2;  
    c3.display();    
    return 0;
}