#include <iostream>
using namespace std;
int main()
{
    int numero, rangeA = 0, rangeB = 0, rangeC = 0, rangeD = 0;

    while (true)
    {
        cout << "Por favor digite um valor: \n";
        cin >> numero;
        if (numero < 0)
        {
            cout << "Quantidade entre [00-25] " << rangeA << endl;
            cout << "Quantidade entre [26-50] " << rangeB << endl;
            cout << "Quantidade entre [51-75] " << rangeC << endl;
            cout << "Quantidade entre [76-100] " << rangeD << endl;
            break;
        }
        else
        {
            if (numero >= 0 && numero <= 25)
            {
                rangeA++;
            }
            else if (numero >= 26 && numero <= 50)
            {
                rangeB++;
            }
            else if (numero >= 51 && numero <= 75)
            {
                rangeC++;
            }
            else if (numero >= 76 && numero <= 100)
            {
                rangeD++;
            }
        }
    }
}