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
        Product()
        {

        }
        Product(int a, char b[20], float c)
        {
            pro_id = a;
            strcpy(pro_name, b);
            price = c;
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
    Product p1(40, "Mobile", 500.60);
    Product p2(50, "Laptop", 510.60);
    Product p3(60, "Computer", 520.60);
    p1.display(); 
    p2.display();
    p3.display();
    return 0;
}