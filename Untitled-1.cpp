#include <iostream>
using namespace std;
 
int main() 
{
    int numbers[5] = {7, 5, 6, 12, 35};
    cout << "\nThe numbers are: ";
    for (int i = 1; i < 5; i++) 
    {
        cout << numbers[i] << "  ";
    }
    return 0;
}