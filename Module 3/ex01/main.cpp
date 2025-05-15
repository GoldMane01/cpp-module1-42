#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

	ScavTrap a("Juanceto01");
	ScavTrap b;
	ClapTrap c;

	a.attack("Momo");
	b.takeDamage(0);
	b.beRepaired(3);
	a.guardGate();

	return 0;
}