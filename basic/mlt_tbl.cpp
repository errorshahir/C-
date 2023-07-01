#include <iostream>
using namespace std;

int main ()
{
    int num, i;

    cout << "Enter number : ";
    cin >> num;

    for (i=1; i<=10; i++)
    {
        cout << num << " x " << i << " = " << i*num << endl;
    }

}