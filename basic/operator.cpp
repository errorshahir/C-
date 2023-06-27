// Operator

// Arithmatic operator
// Assignment operator
// Relational operator
// Logical operator
// Conditional operator
// Unary operator
// Bitwise operator
// Special operator

#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    cout << endl;

    int sum = num1 + num2;
    cout << "Summation is " << sum << endl;

    int sub = num1 - num2;
    cout << "Substraction is " << sub << endl;

    int mul = num1 * num2;
    cout << "Multiplication is " << mul << endl;

    double div = (float) num1 / num2;  //Type casting
    cout << "Division is " << div << endl;

    int mod = num1 % num2;
    cout << "Remainder is " << mod << endl;

    return 0;

}