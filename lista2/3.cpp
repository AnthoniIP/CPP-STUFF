#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float numero;
    cout << "Por favor digite um valor: \n";
    cin >> numero;

    for (int i = 1; i <= 200; i++)
    {

        float result = numero * i;
        cout << i << " = " << result << " ";
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
    getch();
    return 0;
}