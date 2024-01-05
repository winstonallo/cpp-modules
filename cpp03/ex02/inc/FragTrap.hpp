#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		~FragTrap();
		FragTrap operator=(const FragTrap &other);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int getAttackDamage();
		void highFiveGuys();
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
};