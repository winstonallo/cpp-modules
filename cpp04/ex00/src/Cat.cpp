/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abied-ch <abied-ch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:43:53 by abied-ch          #+#    #+#             */
/*   Updated: 2024/01/07 19:56:22 by abied-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other){
	this->type = other.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	this->type = other.type;
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

std::ostream	&operator<<( std::ostream &stream, const Cat & ) {
	stream << "Cat: Meow Meow!" << std::endl;
	return (stream);
}
