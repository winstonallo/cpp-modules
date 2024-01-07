#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal, public Brain{
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat &operator=(const Cat &other);
	private:
		Brain *brain;
};

std::ostream	&operator<<(std::ostream &stream, const Cat &instance);

#endif
