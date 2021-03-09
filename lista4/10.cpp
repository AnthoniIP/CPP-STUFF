#include <iostream>
using namespace std;
int main()
{
    int value = 15;
    float A[value];
    float soma = 0, media;

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número" << endl;
        cin >> A[i];
        if (A[i] < 0.0 || A[i] > 10.0)
        {
            cout << A[i] << " por favor digite um valor entre 0.0 e 10.0" << endl;
            i += -1;
        }
    }

    for (int i = 0; i < value; i++)
    {
        soma += A[i];
    }
    media = soma / value;
    cout << "A media da turma eh: " << media;

    return 0;
}