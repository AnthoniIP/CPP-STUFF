#include <iostream>
using namespace std;

int main(void)
{
    float n1, n2;
    float produto;
    while (true)
    {
        cout << "Por favor digite o 1 valor: \n";
        cin >> n1;
        if (n1 == 0)
        {
            break;
        }
        cout << "Por favor digite o 2 valor: \n";
        cin >> n2;
        if (n2 == 0)
        {
            break;
        }

        cout << "Produto: " << n1 * n2 << endl;
    }
    return 0;
}