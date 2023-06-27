#include <iostream>
using namespace std;

int main ()
{
    int n;
    int a[5] = {17, 3, 7, 14, 5};
    int i, j, temp;

    for (i=0; i<5; i++)
    {
        for (j=0; j<5-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (i=0; i<5; i++)
    {
        cout << a[i] << " ";
    }

}