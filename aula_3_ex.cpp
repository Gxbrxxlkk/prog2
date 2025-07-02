#include <random>
#include <format>
#include <iostream>

int main() {

    std::random_device seed;
    std:: default_random_engine engine{seed()};
    std::uniform_int_distribution gerador{1,5};

    int conta1{0};
    int conta2{0};
    int conta3{0};
    int conta4{0};
    int conta5{0};

    for (int i = 0; i <= 10000000; i++) {
        int valor = gerador(engine);
        switch (valor)
        {
        case 1:
            conta1++;
            break;
        case 2:
            conta2++;
            break;
        case 3:
            conta3++;
            break;
        case 4:
            conta4++;
            break;
        case 5:
            conta5++;
            break;
        default: std::cout <<"Fora do internvalo!";
        }
    }
    std::cout << "\n";

    std::cout << std::format("{:>5} {:>10}\n", 1, conta1);
    std::cout << std::format("{:>5} {:>10}\n", 2, conta2);
    std::cout << std::format("{:>5} {:>10}\n", 3, conta3);
    std::cout << std::format("{:>5} {:>10}\n", 4, conta4);
    std::cout << std::format("{:>5} {:>10}\n", 5, conta5);
    return 0;
}