#include <iostream>
using namespace std;
int main()
{
    int value = 6;
   int A[6];
   A[0] = 1;
   A[1] = 0;
   A[2] = 5;
   A[3] = -2;
   A[4] = -5;
   A[5] = 7;

   int sum = A[0] + A[1] + A[5];

   cout << sum << endl;

   A[4] = 100;

   for(int i = 0 ; i < value;i++) {

       cout << A[i] << endl;

   }

   return 0;
}