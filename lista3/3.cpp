#include <iostream>
using namespace std;

int main(void)
{
    int somaPositivos = 0, somaNegativos = 0, numero, qteNumeros = 0, soma = 0;
    while (true)
    {
        cout << "Por favor digite um valor: \n";
        cin >> numero;

        if (numero > 0)
        {
            somaPositivos++;
        }
        else
        {
            somaNegativos++;
        }
        qteNumeros++;
        soma += numero;
        cout << "Quantade de positivos: " << somaPositivos << endl;
        cout << "Quantade de negativos: " << somaNegativos << endl;
        cout << "Media: " << soma / qteNumeros << endl;
    }
    return 0;
}