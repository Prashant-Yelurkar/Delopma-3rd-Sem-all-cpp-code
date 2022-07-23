// write a programe to declare a class product containing data member_product_code, name and Price.accept and display for 2 object
#include<iostream>
using namespace std;
class product
{
    private:
        int p_code;
        char name[10];
        float price;
    public:
        void accept()
        {
            cout<<"\nEnter Product code :";
            cin>>p_code;
            cout<<"Enter Name of Product :";
            cin>>name;
            cout<<"Enter price of Product :";
            cin>>price; 
        }
        void display()
        {
            cout<<"\nProduct code :"<<p_code;
            cout<<"\nProduct Name :"<<name;
            cout<<"\nProduct Price :"<<price;
            cout<<"\n";
        }
};      
int main()
{
    product p1,p2;
    p1.accept();
    p2.accept();
    p1.display();
    p2.display();
    
}
