#include <string>
#include <iostream>
#include <iterator>
#include <array> //para usar std::array
#include <algorithm>


void imprime(std::string nomes[], int tam);
void imprime_num(const int matriz[][3], int linhas, int col);
void printArray(std::array<int, 5> &arr);


int main() {
    
//Parte 1 da aula

    // int x {10};
    // std::cout << "tamanho em bytes de um int: " << sizeof(x);
    // int str[5] {1,2,3,4,5};
    // std::cout << "\n" << &str[0] << " " << &str[1] << " " << &str[2] << " " << &str[3] << " " << &str[4] << " " << &str[5] << "\n";


    //Ssize e size

    // int arr[5] { 1,2,3,4,5};

    // std::cout << "\n" << std::size(arr);
    // std::cout << "\n" << std::ssize(arr);

//For simplificado

    // int arr[5] {1,2,3,4,5};

    // for(int indice{0}; indice < 5; indice++) {
    //     std::cout<<arr[indice] << std::endl;
    // }

    // for(int valor: arr) {
    //     std::cout << valor << std::endl;
    // }


// array multidimensional

    // int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

    // for (int i = 0; i<3; i++) {
    //     for(int j = 0; j<3; j++){
    //         std::cout << a[i][j] << std::endl;
    //     }
    // }

    // //dar uma olhada dps para entender do auto e do endereço de linha
    // for(int (&linha)[3]: a) {
    //     for(auto& valor: linha) {
    //         std::cout << valor << std::endl;
    //     }
    // }


    // std::string universidades[5] {"UFMT", "UFMG", "UFSCar", "USP", "UFG"};
    // imprime(universidades, 5);

//descomentar uma matriz

    // imprime_num(a,3,3);


//usando a template array

    // std::array<int, 5> numeros {1,2,3,4,5};

    // for(int i{0}; i< numeros.size(); i++) {
    //     std::cout << numeros[i] << std::endl;
    // }


    std::array<int, 5> numeros {5,-2,7,9,6};


    printArray(numeros);

//     std::sort(std::begin(numeros), std::end(numeros)); //begin e end retornam iteradores

// bool encontrou {false};
//     encontrou = std::binary_search(std::begin(numeros), std::end(numeros), 9);

//     if (encontrou)
//         std::cout << "encontrou!";
//     else std::cout << "Não encontrou!";
    
    //std::reverse(std::begin(numeros), std::end(numeros));


    // for(const int& valor: numeros) {
    //     std::cout << valor << std::endl;
    // }



    return 0;
}


//Na função por fora da main não tem como usar o for simplificado para percorrer a array (ponteiro)
void imprime(std::string nomes[], int tam) {
    for(int i = 0; i < tam; i++) {
    std::cout << nomes[i] << std::endl;
    }
}

void imprime_num(const int matriz[][3], int linhas, int col) {
    for(int i = 0; i <linhas; i++) {
        for(int j = 0; j < col; j++){
            std::cout << matriz[i][j] << std::endl;
        }
    }
}

void printArray(std::array<int, 5> &arr) {
    for(int valor : arr) {
        std::cout << valor << std::endl;
    }
}