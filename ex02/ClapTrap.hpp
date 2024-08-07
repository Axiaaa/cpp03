#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define string std::string

class ClapTrap {

    private :
    
        string name;
        int hitPoints;
        int energyPoint;
        int attackDamage;

    public :
        ClapTrap(string name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap& clapTrap);
        ClapTrap& operator=(const ClapTrap& clapTrap);


        void setName(string name);
        void setHitPoints(unsigned int hitPoints);
        void setEnergyPoint(unsigned int energyPoint);
        void setAttackDamage(unsigned int attackDamage);
        string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getEnergyPoint() const;
        unsigned int getAttackDamage() const;

        void attack(const string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif