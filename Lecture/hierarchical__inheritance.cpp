#include<iostream>
using namespace std;
class publication
{
    protected:
        char title[20];
        float price;
    public:
        void getdata()
        {
            cout<<endl<<"Enter Publication Titie : ";
            cin>>title;
            cout<<"Enter Publication price : ";
            cin>>price;
        }
        void showdata()
        {
            cout<<endl<<"Publication Titie : "<<title<<endl;
            cout<<"Publication Price : "<<price;
        }
};
class book:public publication
{
    private:
        char author[20];
    public:
        void getdata1()
        {
            publication::getdata();
            cout<<"Enter Author Name : ";
            cin>>author;
        }
        void showdata1()
        {
            cout<<endl<<"Book Publication :";
            publication::showdata();
            cout<<endl<<"Author name : "<<author;
        }
};
class audio_cassette:public publication
{
    private:
        float playing_time;
    public:
        void getdata2()
        {
            cout<<endl;
            publication::getdata();
            cout<<"Enter Playing Time of audio Cassette : ";
            cin>>playing_time;;
        }
        void showdata2()
        {
            cout<<endl<<"Audio cassette Publication : ";
            publication::showdata();
            cout<<endl<<"Playing time of audio casseette : "<<playing_time;
        }
};
int main ()
{
    book b1;
    b1.getdata1();
    b1.showdata1();
    audio_cassette a1;
    a1.getdata2();
    a1.showdata2();
    return 0;
}