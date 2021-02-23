#include <iostream>
using namespace std;

int main(void)
{
    float massaInicial, massaFinal;
    int ciclos = 0;
    int minutos = 0 ;
    int horas = 0;
    int segundos = 0;

    cout << "Por favor digite um valor: \n";
    cin >> massaInicial;
    massaFinal = massaInicial;

    while (massaFinal > 0.5)
    {
        massaFinal = massaFinal / 2;
        ciclos++;
    }
    segundos = ciclos * 50;
    minutos = segundos / 60;
    horas = minutos / 60;
    cout << "Massa inicial :" << massaInicial << endl;
    cout << "Massa final : " << massaFinal << endl;
    cout << "em horas : " << horas << endl;
    cout << "em minutos : " << minutos << endl;
    cout << "em segundos : " << segundos << endl;


    return 0;
}