#include<iostream> 
using namespace std ; 
class distance1
{ 
    int feet , inches; 
    public : 
        distance1(); // default constructor 
        distance1(int , int); // constructor to initialize he and min 
        void showdata (void); 
        distance1 operator +( distance1); 
}; 
distance1 :: distance1 (void) 
{ 
    feet =0 ; inches =0; 
} 
distance1 :: distance1 (int f , int i) 
{ 
    feet =f ; 
    inches =i; 
} 
distance1 distance1 :: operator+(distance1 d2 ) 
{ 
    distance1 temp; 
    temp.feet = feet + d2.feet;         
    temp.inches= inches + d2.inches;            
    if (temp.inches >= 12 ) 
    { 
        temp.feet++;        
        temp.inches = temp.inches % 12; 
    } 
    return temp; 
} 
void distance1 :: showdata(void) 
{ 
    cout << feet << " and " << inches <<endl; 
} 
int main () 
{ 
    distance1 d1(3,9) ,d2( 4,6) ; 
    distance1 d3; 
    cout<<" distance 1 in feet and inches is:"<<endl; 
    d1.showdata(); 
    cout<<"distance 2 in feet and inches is:"<<endl; 
    d2.showdata(); 
    // default constructor is invoked 
    d3 = d1 + d2 ;// result is in t3 
    cout<<"Total distance in feet and inches is:"<<endl; 
    d3.showdata(); 
}