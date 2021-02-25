#include <iostream>
using namespace std;

int main(void)
{
    int somaPar = 0, numero, qteNumeros = 0, qtePares = 0, qteImpares = 0, somaTotal = 0;
    while (true)
    {
        cout << "Por favor digite um valor: \n";
        cin >> numero;
        if (numero == 0)
        {
            cout << "Quantidade de pares: " << qtePares << endl;
            cout << "Quantidade de impares: " << qteImpares << endl;
            cout << "Media dos pares: " << somaPar / qtePares << endl;
            cout << "Media geral : " << somaTotal / qteNumeros << endl;
            break;
        }
        else if (numero % 2 == 0)
        {
            somaPar += numero;
            qtePares++;
        }
        else
        {

            qteImpares++;
        }
        somaTotal += numero;
        qteNumeros++;
    }
    return 0;
}