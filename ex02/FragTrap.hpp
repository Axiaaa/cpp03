#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {

    public :
    FragTrap(string name);
    FragTrap();
    ~FragTrap();
    FragTrap& operator=(const FragTrap rhs);
    FragTrap(const FragTrap& FragTrap);
    void highFivesGuys(void);

};



#endif