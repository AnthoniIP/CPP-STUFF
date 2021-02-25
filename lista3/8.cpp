#include <iostream>
using namespace std;
int main()
{
    int numero,razao,pa = 0;
    cout << "Por favor digite o valor inicial valor: \n";
    cin >> numero;
    cout << "Por favor digite a razao: \n";
    cin >> razao;

    cout << endl;
    pa = numero;
    cout << pa << endl;
    for (int i = 1; i <= 9; i++)
    {

        pa += razao;
        cout << pa << endl;
    }

    

    return 0;
}