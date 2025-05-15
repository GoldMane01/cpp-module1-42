#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->health = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << ">> ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
    this->health = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << ">> ScavTrap " << name << " created.\n";
}

ScavTrap::~ScavTrap() {
	std::cout << ">> ScavTrap destructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << ">> Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << ">> Copy assignment operator called" << std::endl;
	return (*this);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name <<
		" is in Gate Keeper mode!" << std::endl;
}