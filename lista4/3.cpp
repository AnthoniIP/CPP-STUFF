#include <iostream>
using namespace std;

int value = 10;

void printArray(float array[],string tipo)
{
    cout<< "Numeros " << tipo << endl;
    for (int i = 0; i < value; i++)
    {
        cout << array[i] << endl;
    }
}
int main()
{

    float nums[value];
    float squared[value];

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número" << endl;
        cin >> nums[i];
        squared[i] = nums[i] * nums[i];
    }
    printArray(nums,"normais");
    printArray(squared,"ao quadrado");
}