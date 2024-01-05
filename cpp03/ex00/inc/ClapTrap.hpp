#pragma once

#include <iostream>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &other);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};