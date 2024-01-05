#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		~FragTrap();
		FragTrap &operator=(const FragTrap &other);
		void attack(const std::string &target) const;
		void highFiveGuys();
	
	private:
		static const unsigned int hitPoints;
		static const unsigned int attackDamage;
};

std::ostream &operator << (std::ostream &out, const FragTrap &fragTrap);