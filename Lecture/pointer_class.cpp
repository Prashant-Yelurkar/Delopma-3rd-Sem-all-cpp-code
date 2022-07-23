#include<iostream>
using namespace std;
class book
{
    private:
        char author_name[20], book_title[20],publication[20];
        float price;
    public:
        void accept()
        {
            cout<<"BOOK DETAILS : "<<endl;
            cout<<endl<<"Author Name : ";
            cin>>author_name;
            cout<<"Book Title : ";
            cin>>book_title;
            cout<<"Publication : ";
            cin>>publication;
            cout<<"Price : ";
            cin>>price;
        }
        void display()
        {
            cout<<endl<<"BOOK DETAILS : "<<endl;
            cout<<endl<<"Author Name : "<<author_name<<endl;
            cout<<"Book Title : "<<book_title<<endl;
            cout<<"Publication : "<<publication<<endl;
            cout<<"Price : "<<price<<endl<<endl;
        }
};
int main()
{
    book b1;
    book *ptr;
    ptr = &b1;
    ptr->accept();
    ptr->display();
    return 0;
}
