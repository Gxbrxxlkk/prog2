#include <iostream>

int main() {

    int  contador{0};
    float x{0}, soma{0};
    float media{0.00f};

    while ((std::cin >> x) && (x >=0) && (x <= 0)) {   
        if (x>=0 && x<=10)
        {            
            soma += x;
            contador++;
        } else {
        std::cout << "Entrada inválida, insira novamente: " << std::endl;
        }
    } 

    media = soma / contador;
    std::cout << "Soma = " << soma << "\nMédia: " << media << std::endl;

}