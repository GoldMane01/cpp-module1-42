#include "ClapTrap.hpp"

int main(void) {

	ClapTrap a("Juanceto01");
	ClapTrap b("Momo");

	a.attack("Momo");
	b.takeDamage(0);
	b.beRepaired(3);

	return 0;
}