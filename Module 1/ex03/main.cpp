#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>
#include <string>

int main(void) {
	Weapon weapon = Weapon("Uchigatana");
	HumanA humana = HumanA("Jimbo", weapon);
	humana.attack();
	weapon.setType("Queelag's Fury Sword");
	humana.attack();

	Weapon gun = Weapon("Gun");
	HumanB humanb = HumanB("Maria");
	humanb.setWeapon(gun);
	humanb.attack();
	gun.setType("Sword");
	humanb.attack();
	return (0);
}