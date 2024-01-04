#include "../inc/ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << this->name << " spawned!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap ClapTrap::operator = (const ClapTrap other){
	std::cout << "ClapTrap assignation operator called" << std::endl;
	return other;
}

ClapTrap::~ClapTrap(){
	std::cout << this->name << " died :/" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (this->energyPoints == 0){
		std::cout << this->name << " has no energy points left!" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	std::cout << this->name << " has " << this->energyPoints << " energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
	std::cout << this->name << " has " << this->hitPoints << " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints == 0){
		std::cout << this->name << " has no energy points left!" << std::endl;
		return ;
	}
	std::cout << this->name << " is repaired for " << amount << " points of damage!" << std::endl;
	this->hitPoints += amount;
	std::cout << this->name << " has " << this->hitPoints << " hit points left!" << std::endl;
}