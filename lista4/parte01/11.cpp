#include <iostream>
using namespace std;
int main()
{
    int value = 10,qteNegativos = 0;
    float A[value];
    float soma = 0;

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número" << endl;
        cin >> A[i];
        if (A[i] < 0)
        {
            qteNegativos++;
        }else {
            soma+= A[i];
        }
    }
    cout << "Quantidade de negativos: " << qteNegativos<< endl;
    cout << "Soma dos positivos: " << soma<< endl;

    return 0;
}