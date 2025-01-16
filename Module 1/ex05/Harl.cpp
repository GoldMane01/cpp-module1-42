#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << "You want bugs?" << std::endl;
}

void Harl::info(void) {
	std::cout << "Did you know that in terms of human and Pokémon reproduction, Vaporeon is-" << std::endl;
}

void Harl::warning(void) {
	std::cout << "SCP 96 has breached containment and is currently looking for you" << std::endl;
}

void Harl::error(void) {
	std::cout << "An error has occurred, this system will autodestruct itself in 5 seconds" << std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*complaints[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*complaints[i])();
			break;
		}
	}
}