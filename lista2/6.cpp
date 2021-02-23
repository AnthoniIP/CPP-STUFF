#include <iostream>
using namespace std;

int main(void)
{
    int valor, resultado = 0;
    cout << "Por favor digite um valor: \n";
    cin >> valor;

    for (int i = 1; i < valor; i++)
    {
        if (valor % i == 0)
        {
            resultado += i;
        }
    }
    if (resultado == valor)
    {
        cout << valor << " perfeito";
    }
    else
    {
        cout << valor << " nao perfeito";
    }
}