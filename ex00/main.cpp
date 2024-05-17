#include "ClapTrap.hpp"

int main() {

    ClapTrap clap("ClapTrap");

    for (int i = 0; i < 100; i++)
    {
        clap.attack("Lucie");
        clap.beRepaired(1);
    }
    return 0;
}