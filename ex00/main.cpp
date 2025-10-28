#include "Zombie.hpp"

int main()
{
    std::string name = "FOO";
    Zombie *obg;
    obg = newZombie(name);
    obg->randomChump(name);
    delete(obg);
}