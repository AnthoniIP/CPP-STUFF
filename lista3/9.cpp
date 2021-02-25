#include <iostream>
using namespace std;
int main()
{
    int numero,razao,pg = 0;
    cout << "Por favor digite o valor inicial valor: \n";
    cin >> numero;
    cout << "Por favor digite a razao: \n";
    cin >> razao;

    cout << endl;
    pg = numero;
    cout << pg << endl;
    for (int i = 1; i <= 9; i++)
    {

        pg *= razao;
        cout << pg << endl;
    }

    

    return 0;
}