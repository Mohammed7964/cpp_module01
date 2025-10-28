#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *ptr;
    ptr = new Zombie(name);
    return ptr;
}
void Zombie::announce()
{
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::randomChump( std::string name )
{
    std::cout << name << ": ";
}
