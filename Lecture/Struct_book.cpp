#include<iostream>
using namespace std;
struct book
{
    char t[30],a_n[30];
    float price;
};
int main ()
{
    book b1;
    cout<<"Enter BOOK Title : ";
    cin>>b1.t;;
    cout<<"Enter Author name : ";
    cin>>b1.a_n;
    cout<<"Enter book price : ";
    cin>>b1.price;

    cout<<endl<<"BOOKS DETAILS "<<endl;;
    cout<<"BOOK Title : "<<b1.t<<endl;
    cout<<"Author Name : "<<b1.a_n<<endl;
    cout<<"Price : "<<b1.price<<endl;
    return 0;
}
