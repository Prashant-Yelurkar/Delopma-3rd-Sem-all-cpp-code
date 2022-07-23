#include <iostream> 
#include <fstream> 
using namespace std; 
int main() 
{ 
    ofstream f; 
    f.open("abc.txt",ios::out); 
    std::cout<<"abc.txt file opened"<< std::endl; 
    f<<"welcome to vidyalankar"; 
    f<<"welcome to information technology"; 
    f.close(); 
    std::cout<<"abc.txt file closed"<< std::endl; 
    return 0; 
} 