#include <iostream>
using namespace std;
int main()
{
    int value = 5;
    float A[value];
    float soma = 0;
    float maior = 0,menor = 0,media = 0;
    int posicaoMaior,posicaoMenor;

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
        posicaoMaior = i + 1;
    }else if(A[i] < menor) {
        menor = A[i];
        posicaoMenor = i + 1;
    }}
    media = soma / value;
    cout << "posicao do maior : "<< posicaoMaior <<endl;
    cout << "posicao do menor : "<< posicaoMenor <<endl;

    
  

    return 0;
}