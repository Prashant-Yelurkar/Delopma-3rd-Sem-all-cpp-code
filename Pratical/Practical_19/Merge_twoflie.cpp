#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    ifstream fin1, fin2;
    ofstream fout;
    char ch;
    fin1.open("abc.txt");
    fin2.open("abc.txt");
    fout.open("cde.txt");
    while(fin1.eof()==0)
    {
        fin1>>ch;
        fout<<ch;
    }
    while(fin2.eof()==0)
    {
        fin2>>ch;
        fout<<ch;
    }
     cout<<"\n Two Files have been Merged into "<<"acd.txt"<<" File Successfully...!!!";
     fin1.close();
     fin2.close();
     fout.close();
     return 0;
}