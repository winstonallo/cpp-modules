#include "../inc/ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << this->name << " spawned!" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &other){
	if (&other != this){
		std::cout << "ClapTrap " << other.name << " assigned into another ClapTrap" << std::endl;
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage){
	std::cout << "ClapTrap " << other.name << " copied into " << this->name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << this->name << " died :/" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (this->energyPoints == 0){
		std::cout << this->name << " cannot attack, no energy points left!" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
	std::cout << this->name << " has " << this->energyPoints << " energy points left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->name << " takes " << amount << " points of damage!" << std::endl;
	while(amount > 0){
		if (this->hitPoints == 0){
			std::cout << this->name << " has no hit points left!" << std::endl;
			std::cout << "Overkill damage: " << amount << std::endl;
			return ;
		}
		this->hitPoints--;
		amount--;
	}
	std::cout << this->name << " has " << this->hitPoints << " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints == 0){
		std::cout << this->name << " cannot repair himself, no energy points left!" << std::endl;
		return ;
	}
	std::cout << this->name << " is repaired for " << amount << " points of damage!" << std::endl;
	this->hitPoints += amount;
	std::cout << this->name << " has " << this->hitPoints << " hit points left!" << std::endl;
	std::cout << this->name << " has " << this->energyPoints << " energy points left!" << std::endl;
}

unsigned int ClapTrap::getAttackDamage(){
	return this->attackDamage;
}