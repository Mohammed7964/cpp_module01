#include "HumanA.hpp"

// void Humana::setType(std::string const t)
// {
//     type = t;
// }
// std::string Humana::getType()
// {
//     return (type);
// }
void Humana::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
Humana::Humana(std::string const &name, Weapon &weapon)
    : name(name), weapon(weapon) {}