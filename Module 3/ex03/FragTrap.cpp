#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << ">> FragTrap default constructor called\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
    this->health = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << ">> FragTrap " << name << " created.\n";
}

FragTrap::~FragTrap() {
	std::cout << ">> FragTrap destructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << ">> Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << ">> Copy assignment operator called" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name <<
		" attempts to high five everyone!" << std::endl;
}