#include <iostream>
using namespace std;
int main()
{
    const int count = 15;
    float numeros[count];
    float maior, menor;
    //populando array com as 15 entradas
    for (int i = 0; i < count; i++)
    {
        float numero;
        cout << "Por favor digite um valor: \n";
        cin >> numero;
        numeros[i] = numero;
    }
    maior = menor = numeros[0];
    //descobrindo o maior valor
    for (int i = 0; i < count; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }
    //descobrindo o menor valor
    for (int i = 0; i < count; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}