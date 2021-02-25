#include <iostream>
using namespace std;
int main()
{
    int numero = 1, multi = 1;
    while (true)
    {
        cout << "Por favor digite um valor: \n";
        cin >> numero;
        if (numero == 0)
        {
            break;
        }
        else
        {
            for (int i = numero; i > 0; i--)
            {
                multi *= i;
            }
            cout << numero << "! = " << multi << endl;
            multi = 1;
        }
    }
    return 0;
}