#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Por favor digite um valor: \n";
    cin >> numero;

    cout << endl;
    for (int i = 0; i <= 10; i++)
    {

        int multi = i * numero;
        cout << i << " x " << numero << " = " << multi << endl;
    }

    cout << endl;

    return 0;
}