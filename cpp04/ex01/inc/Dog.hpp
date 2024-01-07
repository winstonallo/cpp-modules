#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal, public Brain{
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog &operator=(const Dog &other);
	private:
		Brain *brain;
};

std::ostream	&operator<<(std::ostream &stream, const Dog &instance);

#endif