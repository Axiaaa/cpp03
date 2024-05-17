#include "ClapTrap.hpp"

int main() {

    ClapTrap clap("Emy");

    for (int i = 0; i < 120; i++)
    {
        clap.attack("Lucie");
        clap.beRepaired(1);
    }
    return 0;
}