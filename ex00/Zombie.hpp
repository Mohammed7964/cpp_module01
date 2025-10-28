#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
class Zombie
{
    private:
        std::string name; 
    public:
        ~Zombie(){announce();};
        void announce();
        Zombie(std::string n){name = n;};
        void randomChump(std::string name);
};
Zombie *newZombie(std::string name);

#endif