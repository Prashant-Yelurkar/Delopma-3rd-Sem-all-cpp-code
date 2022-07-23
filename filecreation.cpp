#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream f;
    f.open("abc.txt", ios::out);
    cout<<"abc.txt file is created";
    return 0;
}