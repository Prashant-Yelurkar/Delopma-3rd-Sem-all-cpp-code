#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("abc.txt", ios::in);
    cout<<"abc.txt file is created";
    f.close();
    cout<<endl<<"abc.txt file is closed";
    return 0;
}