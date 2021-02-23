#include <iostream>
using namespace std;

int main(void)
{
    int resultado = 0;
    int anoInicial, anoFinal,diferenca;

    cout << "Por favor digite o ano inicial: \n";
    cin >> anoInicial;
    cout << "Por favor digite o ano final: \n";
    cin >> anoFinal;

    for (int i = anoInicial; i <= anoFinal; i++)
    {
        if(i % 4 == 0) {
            resultado += 366;
        }else {
            resultado +=365;
        }
    }
    cout << resultado;
}