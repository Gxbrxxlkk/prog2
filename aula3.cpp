// Conversão entre tipos primitivos
#include <iostream>
#include <numbers>
#include <format>
#include <cmath>
#include <random>



int calculaQuadrado(int x);
double calculaQuadrado(double x);

int maior(int x, int y, int z) {
    if (y>x) {
        if (y>z){
            return y;
        } return z;
    } else if (x>y) {
        if (x>z)
        {
            return x;
        }
        return z;
    }
    return z;
    
    /*
    Outro jeito de implementar (se colocar as condições em evidência):
    
    if(x > y && x > z)return x;
    if(y > x && y > z)return y;
    return z;
    */
}


int main() {
    
    // double pi{3.14159};
    // int intpi = pi;
    
    
    //O vs code não identifica a nomeclatura do novo C++20, por isso aparece sublinhado de vermelho
    // std::cout << "Pi = " << std::numbers::pi << std::endl;
    // std::cout << "e = " << std::numbers::e << std::endl;
    // std::cout << "raiz de 2 = " << std::numbers::sqrt2 << std::endl;
    
    // int numero;
    // std::cout << "Insira um numero inteiro: ";
    // std::cin >> numero;
    
    // int resultado = calculaQuadrado(numero);
    
    // std::cout << std::format("\nO quadrado de {} eh {}", numero, resultado) << std::endl;
    
    //Exercicio do maior:
    /*
    int x, y, z;
    std::cin >> x >> y >> z;
    int resultado = maior(x,y,z);
    std::cout << resultado << std::endl;
    */
   
   //sobrecarga de função
    // int numero1{4};
    // double numero2{3.14};
    // int resultado1 = calculaQuadrado(numero1);
    // double resultado2 = calculaQuadrado(numero2); 

    // std::cout << std::format("\nO quadrado de 4 e de 3.14 é {} e {}", resultado1, resultado2) << std::endl;





   return 0;
}



//Função q calcula o ao quadrado de um numero inteiro
int calculaQuadrado(int x) {
    return x*x;
}

double calculaQuadrado(double x) {
    return x*x;
}