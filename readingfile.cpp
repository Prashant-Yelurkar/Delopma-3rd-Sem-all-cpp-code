#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char line[100];
    fin.open("xyz.", ios::in);
    cout<<"content of file are"<<endl;
    while(fin)
    {
        fin.getline(line,100);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}