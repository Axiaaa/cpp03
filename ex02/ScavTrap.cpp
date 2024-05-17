#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name) : ClapTrap(name) {
    this->setHitPoints(100);
    this->setEnergyPoint(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap " << this->getName() << " is created" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->getName() << " is destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap.getName()){
    *this = scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap) {
    this->setName(scavTrap.getName());
    this->setHitPoints(scavTrap.getHitPoints());
    this->setEnergyPoint(scavTrap.getEnergyPoint());
    this->setAttackDamage(scavTrap.getAttackDamage());
    return *this;
}

void ScavTrap::guardGate() {

    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
