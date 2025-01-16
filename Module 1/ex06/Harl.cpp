#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << "\n"
		<< "You want bugs?\n" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << "\n"
		<< "Did you know that in terms of human and Pokémon reproduction, Vaporeon is-\n" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << "\n"
		<< "SCP 96 has breached containment and is currently looking for you\n" << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << "\n"
		<< "An error has occurred, this system will autodestruct itself in 5 seconds\n" << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*complaints[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4) {
		if (level == levels[i]) {
			break;
		}
		i++;
	}

	switch(i) {
		case (0):
			for (int i = 0; i < 4; i++) {
				(this->*complaints[i])();
			}
			break;
		case (1):
			for (int i = 1; i < 4; i++) {
				(this->*complaints[i])();
			}
			break;
		case (2):
			for (int i = 2; i < 4; i++) {
				(this->*complaints[i])();
			}
			break;
		case (3):
			for (int i = 3; i < 4; i++) {
				(this->*complaints[i])();
			}
			break;
		case (4):
			std::cout << "[ Probably complaining about insignifican problems ]" << std::endl;
			break;
	}
}