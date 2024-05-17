#include "FragTrap.hpp"

FragTrap::FragTrap(string name) : ClapTrap(name) {
    this->setName(name);
    this->setAttackDamage(30);
    this->setHitPoints(100);
    this->setEnergyPoint(100);
    std::cout << "FrapTrap " << this->getName() << " is created" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Default") {
    this->setName("Default");
    this->setAttackDamage(30);
    this->setHitPoints(100);
    this->setEnergyPoint(100);
    std::cout << "Default FrapTrap " << this->getName() << " is created" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FrapTrap " << this->getName() << " is destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& FragTrap) : ClapTrap(FragTrap.getName()) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = FragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap rhs) {
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->setName(rhs.getName());
    this->setHitPoints(rhs.getHitPoints());
    this->setEnergyPoint(rhs.getEnergyPoint());
    this->setAttackDamage(rhs.getAttackDamage());
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Sup cutie, wanna high five ?\n";
}