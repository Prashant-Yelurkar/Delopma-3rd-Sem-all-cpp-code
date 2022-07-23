#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("xyz.txt", ios::out);
    cout<<"Writing into the file"<<endl;
    fout<<"Welcome to vidyalankar"<<endl;
    fout<<"Prashant Erappa yelurkar"<<endl;
    fout<<"IF3I-A"<<endl;
    fout<<"roll No : - 20202A0040"<<endl;
    fout.close();
    return 0;
}