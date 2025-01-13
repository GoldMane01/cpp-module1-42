#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : contactCount(0) {

}

void PhoneBook::addContact() {
    if (contactCount < 8) {
        contacts[contactCount].setDetails();
        contactCount++;
    } else {
        static int oldestIndex = 0;
        std::cout << "Está petao, se reemplazará al contacto más antiguo.\n";
        contacts[oldestIndex].setDetails();
        oldestIndex = (oldestIndex + 1) % 8;
    }
}

void PhoneBook::searchContacts() const {
	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << "\n";
    std::cout << "-------------------------------------------\n";

    for (int i = 0; i < contactCount; i++) {
		contacts[i].displaySummary(i);
	}

	std::cout << "¿A quién quieres vichear? (Inserta índice)" << "\n";
	int index;
	std::cin >> index;

	if (index >= contactCount || index < 0) {
		std::cerr << "No existe máquina" << "\n";
		std::cin.clear();
	} else {
		contacts[index].displayDetails();
	}
}