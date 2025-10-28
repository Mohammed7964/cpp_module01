#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

 int main()
 {
 
 Weapon club = Weapon("crude spiked club");
 Humana bob("Bob", club);
 bob.attack();
 club.setType("some other type of club");
 bob.attack();

 Weapon club1 = Weapon("crude spiked club");
 Humanb jim("Jim");
 jim.setWeapon(club);
 jim.attack();
 club1.setType("some other type of club");
 jim.attack();
 return 0;
 }