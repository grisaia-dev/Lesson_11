#include <iostream>
#include <Windows.h>
#include "Leaver.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Leave::Leaver human;

	std::cout << "Введите имя: ";
	std::string name = "";
	std::cin >> name;

	std::cout << human.leave(name) << std::endl;
	return 0;
}