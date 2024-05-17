#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clapTrap("ClapTrap");

    ScavTrap scavTrap("ScavTrap");

    clapTrap.attack("Enemy");
    scavTrap.attack("Enemy");

    clapTrap.takeDamage(10);
    scavTrap.takeDamage(10);

    clapTrap.beRepaired(5);
    scavTrap.beRepaired(5);

    scavTrap.guardGate();

    while (scavTrap.getHitPoints() > 0) {
        scavTrap.takeDamage(1);
    }

    while (scavTrap.getEnergyPoint() > 0) {
        scavTrap.attack("Enemy");
    }

    while (clapTrap.getHitPoints() > 0) {
        clapTrap.takeDamage(1);
    }

    while (clapTrap.getEnergyPoint() > 0) {
        clapTrap.attack("Enemy");
    }
    return 0;
}