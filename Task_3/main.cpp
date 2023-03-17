#include <iostream>
#include "leaver/Leaver.hpp"

int main(void) {
    std::cout << "Введите имя: ";
    std::string name = "";
    std::cin >> name;

    Leaver human;
    std::cout << human.leave(name) << std::endl;
    return 0;
}