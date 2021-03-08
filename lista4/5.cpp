#include <iostream>
using namespace std;
int main()
{
    int value = 10;
    int A[value];
    int count = 0;

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número" << endl;
        cin >> A[i];
    }

    for (int i = 0; i < value; i++)
    {
        if( A[i] % 2 == 0) {
            count++;
        }
    }
    cout << "a lista possui " << count << " valores pares" << endl;

    return 0;
}