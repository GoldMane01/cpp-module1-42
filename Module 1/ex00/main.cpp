#include "Zombie.hpp"
#include "Zombie.h"

int main(void) {
	Zombie *zombie = newZombie("Parguela");
	zombie->announce();
	randomChump("Ennover");
	delete zombie;
	return (0);
}