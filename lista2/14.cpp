#include <iostream>
using namespace std;

int main(void)
{
    int numero;
    cout << "Por favor digite um valor valor: \n";
    cin >> numero;

    int numeros[numero];

    for (int i = 0; i < numero - 1; i++)
    {
        numeros[i] = i;
    }
    for(int i = 0; i< numero -1;i++) {
        if(i % 2 != 0) {
            cout << i << endl;
        }
    }
    for(int i = 0; i< numero -1;i++) {
        if(i % 2 == 0 && i != 0) {
            cout << i << endl;
        }
    }
}