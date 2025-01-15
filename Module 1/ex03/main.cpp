#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>
#include <string>

int main(void) {
	Weapon weapon = Weapon("Uchigatana");

	HumanA human = HumanA("Jimbo", weapon);
	human.attack();
	weapon.setType("Queelag's Fury Sword");
	human.attack();
}