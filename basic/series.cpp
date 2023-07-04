#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n, i;
    int sum = 0;
    cout << "Enter last number : ";
    cin >> n;

    for (i=1; i<=n; i++)
    {
        sum = sum + pow(i,5);
    }

    cout << sum << endl;

}