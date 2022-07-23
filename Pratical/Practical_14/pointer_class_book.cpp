#include<iostream>
using namespace std;
class book
{
    private:
        char book_name[20], author_name[20];
        float price;
    public:
        void getdata()
        {
            cout<<endl<<"Book details : "<<endl<<endl;
            cout<<"Enter Book Name : ";
            cin>>book_name;
            cout<<"Enter Author Name : ";
            cin>>author_name;
            cout<<"Enter Book Price : ";
            cin>>price;
        }
        void showdata()
        {
            cout<<endl<<endl<<"Book Details  :"<<endl;
            cout<<endl<<"Book Name : "<<book_name;
            cout<<endl<<"Author Nmae : "<<author_name;
            cout<<endl<<"Price : "<<price;
        }
};
int main()
{
    book b1;
    book *ptr;
    ptr = & b1;
    ptr->getdata();
    ptr->showdata();
    return 0;
}