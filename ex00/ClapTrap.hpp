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

        void attack(const string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        
};


#endif