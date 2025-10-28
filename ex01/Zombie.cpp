#include "Zombie.hpp"

void Zombie::setname(std::string n)
{
    name = n;
}
Zombie::Zombie() {}

Zombie::Zombie(std::string n) : name(n) {}

Zombie::~Zombie() {}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}