#include <iostream>
using namespace std;

int main ()
{
   int i;

   for (i=0; i<=100; i+=2)
   {
      if (i==10)
      {
         break;
      }

      cout << i << endl;
   }
}