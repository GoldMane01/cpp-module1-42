#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

	ScavTrap a("Juanceto01");
	FragTrap b("Momo");

	a.attack("Momo");
	b.takeDamage(20);
	b.beRepaired(10);
	a.guardGate();
	b.highFivesGuys();

	return 0;
}