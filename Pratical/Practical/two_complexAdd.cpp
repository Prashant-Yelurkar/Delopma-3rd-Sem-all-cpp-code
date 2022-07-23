#include<iostream> 
using namespace std ; 
class complex 
{ 
    int real; 
    float img; 
    public : 
        complex( ); // default constructor 
        complex( int , float); 
        complex operator+( complex ); 
        void showdata(void); 
}; 
complex :: complex() 
{ 
    real =0 ; 
    img = 0.0; 
} 

complex :: complex( int r , float i) 
{ 
    real = r; 
    img =i; 
} 

complex complex :: operator+(complex c2) 

{ 
    complex temp; // create a temporary object 
    temp. real = real + c2.real ; 
    temp. img = img + c2.img; // result is in temp object 
    return temp; // return temp object to the main prog. 
} 

void complex :: showdata (void) 
{ 
    cout << real << "+" << img<<endl ;		//3+j8.3 
} 
int main(void) 
{ 
    complex c1(5, 6.8) ,c2 ( 3, 4.2) ,c3; 
    c3 =c1 + c2 ; // c2 is explicitly passed , result will be in c3. 
    c3.showdata(); 
} 