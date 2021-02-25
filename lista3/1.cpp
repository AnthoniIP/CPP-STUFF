#include <iostream>
using namespace std;
int main()
{
    int soma = 0;
    for (int i = 1; i <= 500; i++)
    {
        if (i % 3 == 0)
        {
            soma += i;
        }
    }
    cout << soma;
}