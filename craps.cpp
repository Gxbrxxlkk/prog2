#include <random>
#include <format>
#include <iostream>

int lancamento_dados() {
    static std::random_device seed;
    static std:: default_random_engine engine{seed()};
    static std::uniform_int_distribution gerador{1,6};
    int dado1{gerador(engine)};
    int dado2{gerador(engine)};
    return dado1 + dado2;
}

int main() {

    int dados = lancamento_dados();
    int pontos{0};
    bool flag{true};
    if (dados == 2 || dados == 3 || dados == 12) {
        std::cout << "craps" << std::endl;
        flag = false;
    }
    else if (dados == 11 || dados == 7) {
        std::cout << "Ganhou" << std::endl;
        flag = false;
    } else {
        pontos += dados;
    }

    while (flag) {

    int dados = lancamento_dados();

    if (dados == 2 || dados == 3 || dados == 12) {
        std::cout << "craps" << std::endl;
        flag = false;
    }
    else if (dados == 11 || dados == 7) {
        std::cout << "Ganhou," << " quantidade de pontos feitos: " << pontos << std::endl;
        flag = false;
    }
    else pontos += dados;    
    }
    

}