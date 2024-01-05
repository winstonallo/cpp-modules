#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : name(name), hitPoints(100), energyPoints(100), attackDamage(30){
	std::cout << "FragTrap " << this->name << " spawned!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap FragTrap::operator = (const FragTrap &other){
	std::cout << "FragTrap assignation operator called" << std::endl;
	return other;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->name << " died :/" << std::endl;
}

void FragTrap::attack(const std::string &target){
	if (this->energyPoints == 0){
		std::cout << this->name << " has no energy points left!" << std::endl;
		return ;	
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	std::cout << "FragTrap " << this->name << " has " << this->energyPoints << " energy points left!" << std::endl;	
}

void FragTrap::takeDamage(unsigned int amount){
	if (this->hitPoints == 0){
		std::cout << "Stop attacking " << this->name << " he's dead already ://" << std::endl;
		std::cout << "Overkill damage: " << amount << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	while (amount > 0){
		if (this->hitPoints == 0){
			std::cout << "FragTrap " << this->name << " has no hit points left!" << std::endl;
			std::cout << "Overkill damage: " << amount << std::endl;
			return ;
		}
		this->hitPoints--;
		amount--;
	}
	std::cout << "FragTrap " << this->name << " has " << this->hitPoints << " hit points left!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
	if (this->energyPoints == 0){
		std::cout << this->name << " has no energy points left!" << std::endl;
		return ;	
	}
	std::cout << "FragTrap " << this->name << " is repaired for " << amount << " points of damage!" << std::endl;
	this->hitPoints += amount;
	std::cout << "FragTrap " << this->name << " has " << this->hitPoints << " hit points left!" << std::endl;
	std::cout << "FragTrap " << this->name << " has " << this->energyPoints << " energy points left!" << std::endl;
}

unsigned int FragTrap::getAttackDamage(){
	return this->attackDamage;
}

void FragTrap::highFiveGuys(){
	std::cout << "FragTrap " << this->name << " tries to high five someone but no one likes him" << std::endl;
}

