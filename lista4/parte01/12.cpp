#include <iostream>
using namespace std;
int main()
{
    int value = 5;
    float A[value];
    float soma = 0;
    float maior = 0,menor = 0,media = 0;

    for (int i = 0; i < value; i++)
    {
        cout << "insira um número" << endl;
        cin >> A[i];
       
    }
    menor = A[0];
     for (int i = 0; i < value; i++){
    cout << A[i] << endl;
    soma += A[i];
    if(A[i] > maior) {
        maior = A[i];
    }else if(A[i] < menor) {
        menor = A[i];
    }}
    media = soma / value;
    cout << "maior: " << maior << endl;
    cout << "menor: " << menor << endl;
    cout << "media: " << media << endl;
    
  

    return 0;
}