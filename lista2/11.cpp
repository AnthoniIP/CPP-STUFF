#include <iostream>
using namespace std;

int main(void)
{
    int somaPar = 0, somaImpar = 0, numero;
    while (true)
    {
        cout << "Por favor digite um valor: \n";
        cin >> numero;
        if (numero > 1000)
        {
            cout << "Soma dos pares: " << somaPar << endl;
            cout << "Soma dos impares: " << somaImpar << endl;
            break;
        }
        else if (numero % 2 == 0)
        {
            somaPar += numero;
        }
        else
        {
            somaImpar += numero;
        }
    }
    return 0;
}