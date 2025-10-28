#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <iostream>
class Humanb
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        Humanb(std::string const &name);
        void setWeapon(Weapon &weapon);
        void attack() const;
};
# endif