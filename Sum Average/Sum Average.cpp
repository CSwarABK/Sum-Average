// Colton Swartwoudt, 7/20/22
/*Write a program to find the “Sum”and “Average” of “three” numbers.
Provide a hint to the user, take the input and return some output results
to show the user the calculations for their three numbers.
*/


#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Welcome to the Sum & Average Calculator.\nPlease enter 2 numbers\n";
    cin >> num1 >> num2;
    cout << "Your two numbers are: " << num1 << " and " << num2 <<"\n";
    cout << "The sum of these two numbers is: " << (num1 + num2) << "\n";
    cout << "Calculated via: " << num1 << " + " << num2 << "." << "\n";
    cout << "The average of these two numbers is: " << (float)(num1 + num2) / 2 << "\n";
    cout << "Calculated via: (" << num1 << " + " << num2 << ") / 2." << "\n";
}
