#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void Weapon::setType(std::string const t)
{
    type = t;
}
std::string Weapon::getType()
{
    return (type);
}
Weapon::Weapon(std::string type)
{
    this->type = type;
}