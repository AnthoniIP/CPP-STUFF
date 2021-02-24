#include <iostream>
using namespace std;

int main(void)
{
    float n1, n2, n3;
    float soma, produto, media;
    while (true)
    {
        cout << "Por favor digite o primeiro valor: \n";
        cin >> n1;
        cout << "Por favor digite o segundo valor: \n";
        cin >> n2;
        cout << "Por favor digite o terceiro valor: \n";
        cin >> n3;
        if (n1 > n2 || n2 > n3)
        {
            break;
        }
        else
        {
            soma = n1 + n2 + n3;
            produto = n1 * n2 * n3;
            media = soma / 3;
            cout << "Soma: " << soma << endl;
            cout << "Produto: " << produto << endl;
            cout << "Media: " << media << endl;
        }
    }
}