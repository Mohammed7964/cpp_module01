#include "HumanB.hpp"

void Humanb::attack() const
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon!" << std::endl;
}
Humanb::Humanb(std::string const &name)
    : name(name), weapon(NULL) {}

void Humanb::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}