#include "../inc/Fixed.hpp"

int Fixed::getRawBits() const{
    std::cout << "getRawBits mamber function called" << std::endl;
    return this->fixedPointValue;
}

void Fixed::setRawBits(const int raw){
	this->fixedPointValue = raw;
}

Fixed::Fixed(){
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const&src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&Fixed::operator=(Fixed const&rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return *this;
}