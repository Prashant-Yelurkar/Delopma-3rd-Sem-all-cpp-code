#include<iostream>
#include<string.h>
using namespace std;
class Product
{
    private:
        int pro_id;
        char pro_name[20];
        float price;
    public:
        Product(int a, char b[20], float c)
        {
            
        }
        Product()
        {
          cout<<endl<<"Enter Product Id : ";
          cin>>pro_id;
          cout<<"Enter Product name : ";
          cin>>pro_name;
          cout<<"Enter Product Price: ";
          cin>>price;
        }
        void display()
        {
            cout<<endl<<endl<<"Product Details :"<<endl;
            cout<<endl<<"Product Id : "<<pro_id;
            cout<<endl<<"Product Name : "<<pro_name;
            cout<<endl<<"Product Price : "<<price;
        }
};
int main()
{
    Product p1,p2,p3;
    p1.display(); 
    p2.display();
    p3.display();
    return 0;
}