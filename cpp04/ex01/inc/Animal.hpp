#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define DEFAULT_TYPE

class Animal{
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	~Animal();
	std::string	getType() const;
	void		setType(const std::string type);
	Animal &operator=(const Animal &other);

	void makeSound() const;
};

std::ostream	&operator<<( std::ostream &stream, const Animal &instance );

#endif