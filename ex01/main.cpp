#include "PhoneBook.hpp"
#include <iostream>

int main() {
	PhoneBook phoneBook;
	std::string command;
	int exit = 0;

	std::cout << "Bienvenido al librico de contactos, los comandos son:" << "\n"
			<< "ADD" << "\t" << "SEARCH" << "\t" << "EXIT" << "\n";

	while (exit == 0) {
		std::cout << "> ";
		std::cin >> command;
		std::cin.ignore();
		if (command == "ADD" || command == "add") {
			phoneBook.addContact();
		} else if (command == "SEARCH" || command == "search") {
			phoneBook.searchContacts();
		} else if (command == "EXIT" || command == "exit") {
			std::cout << "Saliendo...";
			exit = 1;
		} else {
			std::cout << "Comando inválido notas" << "\n";
		}
	}

	return 0;
}