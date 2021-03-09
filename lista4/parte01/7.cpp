#include <iostream>
using namespace std;
int main()
{
    int value = 10;
    int A[value];
    int maior = 0, menor = 0,posicao;

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número" << endl;
        cin >> A[i];
    }
    
    for (int i = 0; i < value; i++)
    {
        int valorAtual = A[i];
        if (valorAtual > maior)
        {
            maior = valorAtual;
            posicao = i + 1;
        }
        
    }
    cout << "Maior: " << maior<< endl;
    cout << "posicao no vetor: " << posicao<< endl;

    return 0;
}