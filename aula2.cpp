#include <iostream>
//#include <format>

int main() {
    int x{10};

//    std::cout << std::format("Numero: {} \n", numero)
    //:#x aparece em hexadecimal, :b aparece em binário, :o em octal

std::cout << "X antes do incremento: " << x << std::endl;

int y = 2*(x++);

std::cout << "X após o incremento: " << x << std::endl;
std::cout << "Y = " << y << std::endl;

return 0;
}