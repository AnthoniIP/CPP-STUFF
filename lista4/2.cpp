#include <iostream>
using namespace std;
int main()
{
    int value = 6;
   int A[6];

   for(int i = 0; i < value;i ++) {
       cout << "insira um número" << endl;
       cin >> A[i];
   }

    for(int i = 0; i< value;i ++) {
        cout << A[i] << endl;
    }

   

   return 0;
}