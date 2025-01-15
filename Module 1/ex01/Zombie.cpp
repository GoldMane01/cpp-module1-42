#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " has been destroyed by plants" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName (std::string name) {
	this->name = name;
}