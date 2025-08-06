/*
Aprender sobre vectors (vetores) são classes da classe std::vector
arrays tem tamanho fixo; vectors podem ter o tamanho dinamicamente ajustado (aumentar ou diminuir)

*/

#include <vector>
#include <string>
#include <iostream>

int main() {

    std::vector <int> myVector(5); // Se quiser inicializar com tamanho, basta colocar o (n) na frente do nome da variavel
    //std::vector <std::string> myVector2(0); // Inicializa vazio
    std::vector <int> myVector2 {1,2,3}; // Posso inicializar com uma lista de valores;

    std::cout << "Tamanho de myVector: " << myVector.size() << std::endl;

    for(int valor: myVector2) {
        std::cout << valor << std::endl;
    }

    for (int i{0}; i < myVector.size(); i++)
    {
        myVector.at(i) = i * i; //myvector[i]
    }
    
    myVector2 = myVector;

    myVector2[0] = 30;

    for (int valor:myVector2) {
        std::cout << valor << std::endl;
    }
    
    std::cout << myVector[0] << std::endl;
    int aux = 0;
    for(int i{0}; i < 5; i++) {
        std::cout << "\nForneca um valor inteiro: ";
        std::cin >> aux;
        myVector.push_back(aux); //dinamicamente aloca memória e guarda o valor no final do vetor;
    }

    myVector.pop_back(); //deleta o elemento no final da lista
    
    
    
    return 0;
}