#include <iostream>
using namespace std;
int main()
{
    int value = 6;
    int A[value];
    

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número par" << endl;
        cin >> A[i];
        if(A[i] % 2 != 0) {
            cout << A[i] << " não é par" << endl;
            i+= -1;
        }
    }
    
    for (int i = value - 1; i >= 0; i--)
    {
         cout << A[i] << endl;
        
    }
   
   

    return 0;
}