#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default") {
	this->health = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout << ">> Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) {
	std::cout << ">> ClapTrap constructor called" << std::endl;
	this->name = name;
	this->health = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->damage = other.damage;
	std::cout << ">> Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other) {
		this->name = other.name;
		this->health = other.health;
		this->energy = other.energy;
		this->damage = other.damage;
	}
	std::cout << ">> Copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << ">> ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	std::cout << "ClapTrap " << this->name << " attacks " << target <<
		", causing " << this->damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " takes " << amount <<
		" points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << " repairs itself, restoring " <<
		amount << " points of health!" << std::endl;
}