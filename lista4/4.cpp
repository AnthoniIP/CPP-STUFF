#include <iostream>
using namespace std;

int main()
{
    int value = 8;
    int positionA, positionB;
    bool validentrance = false;
    int sum = 0;
    float nums[value];

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número" << endl;
        cin >> nums[i];
    }

    while (validentrance != true)
    {
        cout << "Insira a primeira posição" << endl;
        cin >> positionA;
        cout << "Insira a segunda posição" << endl;
        cin >> positionB;
        if (positionA <= value && positionB <= value)
        {
            if (positionA > 0 && positionB > 0)
            {
                validentrance = true;
                break;
            }
        }
    }

    sum = nums[positionA - 1] + nums[positionB - 1];

    cout << "A soma das posições " << positionA << " e " << positionB << " é " << sum << endl;
}