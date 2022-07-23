//Take Inputs from User and Store Them in an Array
#include <iostream>
using namespace std;
 
int main() 
{
    int numbers[5];
 
    cout << "Enter 5 numbers: " << endl;
 
    //  store input from user to array
    for (int i = 0; i < 5; ++i) 
    {
        cin >> numbers[i];            // [1 2 3 4 5]
    }
 
    cout << "The numbers are: ";
 
    //  print array elements
    for (int i = 0; i < 5; i++) 
    {
        cout << numbers[i] << "  ";
    }
 
    return 0;
}