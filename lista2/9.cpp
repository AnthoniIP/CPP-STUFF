#include <iostream>
using namespace std;

int main(void)
{
    int i, fib1 = 1, fib2 = 1, soma;
    cout << fib1 << endl;
    cout << fib2 << endl;
    for (i = 3; i <= 12; i = i + 1)
    {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
        cout << fib2 << endl;
    }
}