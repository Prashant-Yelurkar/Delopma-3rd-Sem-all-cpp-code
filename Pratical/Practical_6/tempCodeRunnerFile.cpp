#include<iostream>
using namespace std;
class book
{
    private:
        char author_n[20];
        char book_n[30];
    public:
        float price;
        void getdata()
        {
            cout<<"Enter Name of the Author :";
            cin>>author_n;
            cout<<"Enter Nmae of tha book :";
            cin>>book_n;
            cout<<"Enter price of the book :";
            cin>>price;
            cout<<endl;
        }
        void shoedata()
        {
            cout<<endl<<"Author : "<<author_n<<endl;
            cout<<"Book Name : "<<book_n<<endl;
            cout<<"Price : "<<price<<endl;
        }
};
int main()
{
    book b1,b2;
    b1.getdata();
    b2.getdata();
    if(b1.price>b2.price)
    {
        b1.shoedata();
    }
    else
    {
        b2.shoedata();
    }
    return 0;
}
