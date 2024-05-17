#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");
    FragTrap flagtrap("FlagTrap");

    clapTrap.attack("Enemy");
    scavTrap.attack("Enemy");
    flagtrap.attack("Enemy");

    clapTrap.takeDamage(10);
    scavTrap.takeDamage(10);
    flagtrap.takeDamage(10);


    clapTrap.beRepaired(5);
    scavTrap.beRepaired(5);
    flagtrap.beRepaired(5);

    scavTrap.guardGate();
    flagtrap.highFivesGuys();

    while (scavTrap.getHitPoints() > 0) {
        scavTrap.takeDamage(1);
    }

    while (scavTrap.getEnergyPoint() > 0) {
        scavTrap.attack("Enemy");
    }

    while (clapTrap.getHitPoints() > 0) {
        std::cout << clapTrap.getHitPoints() << "\n";
        clapTrap.takeDamage(1);
    }

    while (clapTrap.getEnergyPoint() > 0) {
        std::cout << clapTrap.getEnergyPoint() << "\n";
        clapTrap.attack("Enemy");
    }

    while (flagtrap.getEnergyPoint() > 0) {
        flagtrap.attack("Enemy");
    }

    while (flagtrap.getHitPoints() > 0) {
        flagtrap.takeDamage(1);
    }
    return 0;
}