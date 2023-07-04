#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Enter number of students : ";
    cin >> n;

    int student [n], sum = 0;

    for (int i=0; i<n; i++)
    {
        cout << "Marks for student " << i+1 << " = ";
        cin >> student [i];
        sum = sum + student [i];
    }

    cout << endl;
    cout << "Sum is " << sum << endl;
   
    float avg = (float) sum/n;
    cout << "Average is " << avg << endl;

    cout << endl;

    for (int i=0; i<n; i++)
    {
        cout << "Marks are : ";
        cout << student [i] << " " << endl;
    }

    int max = student [0];
    int min = student [0];

    for (int i=1; i<n; i++)
    {
        if (max < student[i])
        {
            max = student[i];
        }

        if (min > student[i])
        {
            min = student[i];
        }
    }

    cout << endl;
    cout << "Maximum mark is : " << max << endl;
    cout << "Minimum mark is : " << min << endl;
}