#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_clap_name"), ScavTrap(), FragTrap() {
    this->name = "Diamond";
    this->health = FragTrap::health;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
    std::cout << ">> DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
    this->name = name;
    this->health = FragTrap::health;
    this->energy = ScavTrap::energy;
    this->damage = FragTrap::damage;
    std::cout << ">> DiamondTrap constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	std::cout << ">> Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << ">> Copy assignment operator called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << ">> DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << this->name << ", and my ClapTrap name is " << ClapTrap::name << std::endl;
}