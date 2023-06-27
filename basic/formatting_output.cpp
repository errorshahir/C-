#include <iostream>
#include <iomanip>  // input output manipulation
using namespace std;

int main ()
{
    float num1, num2;
    cout << "Enter two numbers : ";

    cin >> num1 >> num2;
    cout << endl;

    cout << showpoint;
    cout << fixed ;  // eta deyar por set precision e joto digit dibo decimal er por toto digit dekhabe
    cout << setprecision (2); // In total 10 digits will show if I use 10 & without using "Fixed" command.

    float sum = num1 + num2;
    cout << setw(20) << "Sum is " << sum << endl;

    float sub = num1 - num2;
    cout << setw(20) << "Substraction is " << sub << endl;

    float mul = num1 * num2;
    cout << setw(20) << "Multiplication is " << mul << endl;
    
}