#include <iostream>
using namespace std;

int main() {

    int numero{0}, maior{-1}, segundomaior{-2};
    cout << "Entre com um numero positivo: " << endl;

    while (numero >= 0)
    {
        cin >> numero;

        if (numero > maior) {
            maior = numero;        
        } 
        if (numero < maior && numero > segundomaior) {
            segundomaior = numero;
        }
        
    }
    cout << "O maior numero da sequência é: " << maior << "E o segundo é: " << segundomaior << endl;

    return 0;
}