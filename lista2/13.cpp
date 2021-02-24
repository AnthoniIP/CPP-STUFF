#include <iostream>
using namespace std;

int main(void)
{
    float ultimaNota = 0;
    float soma = 0;
    float media = 0;
    int qteNotas = 0;
    float maiorNota = 0, menorNota = 0;

    while (true)
    {
        cout << "Por favor digite uma nota: \n";
        cin >> ultimaNota;
        if (qteNotas == 0)
        {
            menorNota = ultimaNota;
        }
        if (ultimaNota < 0)
        {
            media = soma / qteNotas;
            cout << "Media da turma: " << media << endl;
            cout << "Menor Media da turma: " << menorNota << endl;
            cout << "Maior da turma: " << maiorNota << endl;
            break;
        }
        else
        {
            qteNotas++;
            if (ultimaNota > maiorNota)
            {
                maiorNota = ultimaNota;
            }
            else if (ultimaNota < menorNota)
            {
                menorNota = ultimaNota;
            }
            soma += ultimaNota;
        }
    }
}