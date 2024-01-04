#include "../inc/ClapTrap.hpp"
#include <iostream>

int main(){
	std::cout << "\n--- Constructors ---\n" << std::endl;	
	ClapTrap _Marco("Marco");
	ClapTrap _Arthur("Arthur");
	std::cout << "\n--- Moves ---\n" << std::endl;
	_Marco.attack("Arthur");
	_Arthur.takeDamage(0);
	_Arthur.beRepaired(20);
	std::cout << "\n--- Check if able to attack ---\n" << std::endl;
	for(int i = 0; i < 10; i++)
		_Marco.attack("Arthur");
	std::cout << "\n--- Check if able to be repaired ---\n" << std::endl;
	_Marco.beRepaired(20);
	std::cout << "\n--- Destructors ---\n" << std::endl;
	return 0;
}