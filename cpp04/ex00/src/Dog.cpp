/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abied-ch <abied-ch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:43:53 by abied-ch          #+#    #+#             */
/*   Updated: 2024/01/07 19:53:58 by abied-ch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other){
	this->type = other.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog&){
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);
}

std::ostream	&operator<<( std::ostream &stream, const Dog & ){
	stream << "Dog: Woof Woof!" << std::endl;
	return (stream);
}
