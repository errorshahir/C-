#include <iostream>
using namespace std;

int main ()
{
    double fahrenheit, celsius;

    cout << "Enter celsius : ";
    cin >> celsius;

    fahrenheit = 1.8 * celsius + 32;
    cout << "Fahrenheit = " << fahrenheit;
}