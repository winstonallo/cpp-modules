#include "../inc/Brain.hpp"

#include <iostream>

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}
