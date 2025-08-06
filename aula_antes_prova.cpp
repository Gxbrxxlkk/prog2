#include <iostream>
#include <string>
#include <array>

template<typename T, unsigned long linhas, unsigned long colunas>
void printArray(const std::array<std::array<T, colunas> , linhas> &arr);

int main() {

    std::array< std::array<double, 3>, 3> mat = {std::array{1.1,3.0,2.5}, std::array{1.0,2.0,3.0}, std::array{4.0,5.0,6.0}};

    for(int i{0}; i < mat.size(); i++) {
        for (int j{0}; j < mat.at(0).size(); j++)
        {
            std::cout << mat.at(i).at(j) << std::endl;
        }
        
    }

    printArray(mat);

    // std::array<std::string, 10> arr {}; //array vazia
    // std::array<int, 5> arrayInt {1,2,3,4,5};
    
    // for(auto& str: arr) {
    //     std::cout << "Entre com uma string: " << std::endl;
    //     std::getline(std::cin, str);
    // }
    
    // printArray(arr);
    // printArray(arrayInt);
}


template<typename T, unsigned long linha, unsigned long coluna>
void printArray(const std::array<std::array<T,coluna>,linha> &arr) {

    for (const std::array<T,coluna> &linha: arr) {
        for (const T &valor:linha)
        {
            std::cout << valor << std::endl;
        }
        
    }

    // for (const T &str: arr)
    // {
    //     std::cout << str << std::endl;
    // }
    
}