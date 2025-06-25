#include <cmath>
#include <iostream>
#include <format>
#include <string>

using namespace std;

int main() {

//Ex1

// cout << "Insira o valor inicial do capital, a taxa de juros e o tempo de investimento: " << endl;
// float i, t;
// int C;
// cin >> C >> i >> t;
// t /= 100;
// float M;
// M = C*pow(1+i,t);
// cout << "Valor após o fim do investimento: " << M << endl;

//Ex2

// float v0{0.0};
// float theta{0.0};

// cout << "Insira a velocidade inicial e o ângulo de lançamento (em graus): " << endl;
// cin >> v0 >> theta;

// theta = (theta * 3.14159) / 180.0;

// float v0x = v0 * cos(theta);
// float v0y = v0 * sin(theta);

// float tempo = 2.0 * v0y /9.8;

// float desloc_horizontal = v0x * tempo;

// cout << "O projetil deslocará: " << desloc_horizontal << " metros";


//String

// string nome{"Gabriel"}, sobrenome{" Pivetta Loss"}, nome_completo = nome + sobrenome;
// string texto;

// cout << "Nome completo: " << nome_completo << endl;
// cout << boolalpha << nome.empty() << endl;
// cout << boolalpha << texto.empty() << endl;

//Ex 1

// string palavra;
// cout << "Digite uma palavra para inverter ela: " << endl;
// cin >> palavra;
// string inversa;
// for (int i = (palavra.size() - 1); i >= 0; i--) {
//     cout << palavra.at(i);
// }

string texto, texto_inv;
cout << "Digite a palavra que deseja usar: " << endl;

cin >> texto;
for (int i = texto.size() -1 ; i >= 0; i++)
{

    
}



return 0;
}