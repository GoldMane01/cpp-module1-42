#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string zombieName) : name(zombieName) {}

void Zombie::announce() {
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
