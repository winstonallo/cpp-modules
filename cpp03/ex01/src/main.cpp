#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

#include <iostream>

int main(){
	std::cout << "\n--- Constructors ---\n" << std::endl;	
	ClapTrap _Marco("Marco");
	ScavTrap _Arthur("Arthur");
	std::cout << "\n--- Moves ---\n" << std::endl;
	_Marco.attack("Arthur");
	_Arthur.takeDamage(0);
	_Marco.beRepaired(20);
	std::cout << "\n--- Destructors ---\n" << std::endl;
	return 0;
}