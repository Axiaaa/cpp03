#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");
    FragTrap fragtrap("fragtrap");


    std::cout << "ClapTrap" << std::endl;
    clapTrap.attack("target");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(10);
    std::cout << "ScavTrap" << std::endl;
    scavTrap.attack("target");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();
    std::cout << "fragtrap" << std::endl;
    fragtrap.attack("target");
    fragtrap.takeDamage(10);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();
    return 0;

}