#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {
    std::cout << "\n--- Testing ClapTrap ---\n";
    ClapTrap clap("Clappy");
    clap.attack("target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n--- Testing ScavTrap ---\n";
    ScavTrap scav("Scavvy");
    scav.attack("enemy");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    std::cout << "\n--- Testing FragTrap ---\n";
    FragTrap frag("Fraggy");
    frag.attack("opponent");
    frag.takeDamage(15);
    frag.beRepaired(8);
    frag.highFivesGuys();

    std::cout << "\n--- Testing DiamondTrap ---\n";
    DiamondTrap diamond("Diamondy");
    diamond.attack("boss");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    diamond.whoAmI();

    std::cout << "\n--- Testing Copy and Assignment ---\n";
    DiamondTrap diamondCopy = diamond;
    diamondCopy.whoAmI();

    DiamondTrap diamondAssigned;
    diamondAssigned = diamond;
    diamondAssigned.whoAmI();

    return 0;
}