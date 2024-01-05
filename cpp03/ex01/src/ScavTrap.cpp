#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : name(name), hitPoints(100), energyPoints(50), attackDamage(20){
	std::cout << "ScavTrap " << this->name << " spawned!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap ScavTrap::operator = (const ScavTrap other){
	std::cout << "ScavTrap assignation operator called" << std::endl;
	return other;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name << " died :/" << std::endl;
}

void ScavTrap::attack(const std::string &target){
	if (this->energyPoints == 0){
		std::cout << this->name << " has no energy points left!" << std::endl;
		return ;	
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	std::cout << "ScavTrap " << this->name << " has " << this->energyPoints << " energy points left!" << std::endl;	
}

void ScavTrap::takeDamage(unsigned int amount){
	std::cout << "ScavTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	while (amount > 0){
		if (this->hitPoints == 0){
			std::cout << "ScavTrap " << this->name << " has no hit points left!" << std::endl;
			std::cout << "Overkill damage: " << amount << std::endl;
			return ;
		}
		this->hitPoints--;
		amount--;
	}
	std::cout << "ScavTrap " << this->name << " has " << this->hitPoints << " hit points left!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	if (this->energyPoints == 0){
		std::cout << this->name << " has no energy points left!" << std::endl;
		return ;	
	}
	std::cout << "ScavTrap " << this->name << " is repaired for " << amount << " points of damage!" << std::endl;
	this->hitPoints += amount;
	std::cout << "ScavTrap " << this->name << " has " << this->hitPoints << " hit points left!" << std::endl;
	std::cout << "ScavTrap " << this->name << " has " << this->energyPoints << " energy points left!" << std::endl;
}

unsigned int ScavTrap::getAttackDamage(){
	return this->attackDamage;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " has entered Gate keeper mode!" << std::endl;
}

