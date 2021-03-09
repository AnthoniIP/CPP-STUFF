#include <iostream>
using namespace std;
int main()
{
    int value = 10;
    int A[value];
    int maior = 0, menor = 0;

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número" << endl;
        cin >> A[i];
    }
    menor = A[0];
    for (int i = 0; i < value; i++)
    {
        int valorAtual = A[i];
        if (valorAtual > maior)
        {
            maior = valorAtual;
        }
        else if (valorAtual < menor)
        {
            menor = valorAtual;
        }
    }
    cout << "Maior: " << maior<< endl;
    cout << "Menor: " << menor<< endl;

    return 0;
}