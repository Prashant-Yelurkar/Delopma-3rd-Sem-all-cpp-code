//Display Sum and Average of Array Elements Using for Loop
#include <iostream>
using namespace std;
 
int main()
 {

    // initialize an array without specifying size
    double numbers[6] = {7, 5, 6, 12, 35, 27};
 
    double sum = 0;
    double count = 0;
    double average;
 
    cout << "The numbers are: ";
        for(int i=0; i<6; i++)
    {
        cout << numbers[i] << "  ";
 
        //  calculate the sum
        sum += numbers[i];        //sum = sum+i;
 
        // count the no. of array elements
        ++count;
    }
 
    // print the sum
    cout << "\nTheir Sum = " << sum << endl;
 
    // find the average
    average = sum / count;
    cout << "Their Average = " << average << endl;
 
    return 0;
}