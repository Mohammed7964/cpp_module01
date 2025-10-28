#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <iostream>
class Humana
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        Humana(std::string const &name, Weapon &weapon);
        void attack() const;
};
# endif