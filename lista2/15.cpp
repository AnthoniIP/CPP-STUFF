#include <iostream>
using namespace std;

int main()
{
    int i, n;
    bool primo = true;

    cout << "Por favor digite um valor:\n ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        primo = false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                primo = false;
                break;
            }
        }
    }
    if (primo)
        cout << n << " é primo";
    else
        cout << n << " não é primo";

    return 0;
}