#include <iostream>
#include <Windows.h>
#include "Greeter/Greeter.h"

int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Greet::Greeter human;

    std::cout << "Введите имя: ";
    std::string name = "";
    std::cin >> name;

    std::cout << human.greet(name) << std::endl;
    return 0;
}