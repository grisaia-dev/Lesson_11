#include <iostream>
#include <Windows.h>
#include "leaver/Leaver.hpp"

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите имя: ";
    std::string name = "";
    std::cin >> name;

    Leaver human;
    std::cout << human.leave(name) << std::endl;
    return 0;
}