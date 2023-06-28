#include <iostream>
using namespace std;

int main ()
{
    // int num1, num2;
    // num1 = 20;
    // num2 = 30;

    // int max = (num1>num2) ? num1 : num2;

    // cout << max << endl;

    int num;
    cout << "Enter number : ";
    cin >> num;

    (num%2==0) ? cout << num << " is even" : cout << num << " is odd";

    return 0;
}