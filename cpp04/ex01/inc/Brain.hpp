#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

class Brain{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain &operator=(const Brain &other);
};

std::ostream	&operator<<(std::ostream &stream, const Brain &instance);

#endif