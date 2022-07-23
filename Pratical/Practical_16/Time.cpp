#include<iostream> 
using namespace std ; 
class time1 
{ 
    int hr , min; 
    public : 
        time1(); // default constructor 
        time1(int , int); // constructor to initialize he and min 
        void showdata (void); 
        time1 operator + ( time1); 
}; 
time1 :: time1 (void) 
{ 
    hr =0 ; min =0; 
} 
time1 :: time1 (int hh , int mm) 
{ 
    hr = hh; 
    min =mm; 
}
time1 time1 :: operator + (time1 t2 ) 
{ 
    time1 temp; 
    temp.hr = hr + t2.hr; 
    temp.min = min + t2.min; 
    if (temp.min >= 60 ) 
    { 
        temp.hr = temp.hr + (temp.min / 60); 
        temp.min = temp.min % 60; 
    } 
    return temp; 
} 
void time1 :: showdata(void) 
{ 
    cout << hr << ":" << min ; 
} 
int main () 
{ 
    time1 t1(3,50) ,t2( 4,30) ; //50+30=80   1 20 
    time1 t3; // default constructor is invoked 
    t3 =t1 + t2 ; // result is in t3 
    t3.showdata(); 
} 