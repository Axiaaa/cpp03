#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(string name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap& scavTrap);
        ScavTrap& operator=(const ScavTrap& scavTrap);

        void guardGate();
};


#endif