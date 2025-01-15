#include "Zombie.hpp"

int main(void) {
	Zombie *horde = zombieHorde(3, "Waton Culicagao");
	for (int i = 0; i < 3; i++) {
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}