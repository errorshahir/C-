#include <iostream>
using namespace std;

int main ()
{
   int i, j, temp, n;
   cout << "Enter number : ";
   cin >> n;

   int a[n];

   for (i=0; i<n; i++)
   {
      cin >> a[i];
   }

   for (i=0; i<n; i++)
   {
      for (j=0; j<n-1-i; j++)
      {
         if (a[j]>a[j+1])
         {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
         }
      }
   }

   for (i=0; i<n; i++)
   {
      cout << a[i] << " ";
   }
}