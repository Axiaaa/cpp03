#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) {
    this->name = name;
    this->hitPoints = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << this->name << " is created" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->name << " is destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) {
    *this = clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap) {
    this->name = clapTrap.name;
    this->hitPoints = clapTrap.hitPoints;
    this->energyPoint = clapTrap.energyPoint;
    this->attackDamage = clapTrap.attackDamage;
    return *this;
}

void ClapTrap::attack(const string& target) {
    if (this->energyPoint > 0) {
        std::cout << "ClapTrap " << this->name << " attacks "  << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoint--;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints > 0 && this->energyPoint > 0) {
        std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
        this->hitPoints += amount;
        this->energyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints > 0) {
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
        this->hitPoints -= amount;
    }
}

void ClapTrap::setName(string name) {
    this->name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints) {
    this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoint(unsigned int energyPoint) {
    this->energyPoint = energyPoint;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
    this->attackDamage = attackDamage;
}

string ClapTrap::getName() const {
    return this->name;
}

unsigned int ClapTrap::getHitPoints() const {
    return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoint() const {
    return this->energyPoint;
}

unsigned int ClapTrap::getAttackDamage() const {
    return this->attackDamage;
}
