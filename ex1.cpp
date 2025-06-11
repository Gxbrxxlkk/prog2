#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string palavra, palindromo;
    cout << "Escreva uma palavra" << endl;
    cin >> palavra;
    int tamanho = palavra.size();
    for (int i = (tamanho - 1); i >=0 ; i--) {   
        palindromo += palavra[i];
    }
    bool flag = palavra == palindromo;
    if (flag)
        cout << "É um palindromo\n" << endl;
    else
    cout << "Não é um palindromo\n" << endl;

    return 0;
}
//é possível fazer usando a biblioteca algorithm com o comando .reverse para pegar a string e já inverter ela, sem precisar usar loop;
