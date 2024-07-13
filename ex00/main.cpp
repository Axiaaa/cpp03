#include "ClapTrap.hpp"

int main() {

    ClapTrap clap("ClapTrap");

    for (int i = 0; i < 100; i++)
    {
        clap.attack("L'évaluateur/trice");
        clap.takeDamage(4);
        clap.beRepaired(1);
    }
    return 0;
}