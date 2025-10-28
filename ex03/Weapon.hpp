#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        void setType(std::string const t);
        std::string getType();
};
# endif