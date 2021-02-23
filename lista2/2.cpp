#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {

            int soma = i + j;
            cout << i << " + " << j << " = " << soma << endl;
        }
    }
    cout << endl;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {

            int multi = i * j;
            cout << i << " x " << j << " = " << multi << endl;
        }
    }
    cout << endl;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {

            int sub = i - j;
            cout << i << " - " << j << " = " << sub << endl;
        }
    }
    cout << endl;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (i != 0 && j != 0)
            {
                int div = i / j;
                cout << i << " / " << j << " = " << div << endl;
            }
            else if(j == 0)
            {
                cout << i << " / " << j << " = indeterminado\n";
            }
        }
    }
    return 0;
}