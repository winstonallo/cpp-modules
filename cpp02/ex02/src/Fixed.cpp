#include "../inc/Fixed.hpp"

int Fixed::getRawBits() const{
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

Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int n){
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = n << this->fractionalBits;
}

Fixed::Fixed(float n){
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = roundf(n * (1 << this->fractionalBits));
}

float Fixed::toFloat()const{
	return (float)this->fixedPointValue / (1 << this->fractionalBits);
}

int Fixed::toInt()const{
	return this->fixedPointValue >> this->fractionalBits;
}

Fixed & Fixed::operator = (const Fixed & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(rhs.getRawBits());
	return *this;
}

std::ostream & operator << (std::ostream &o, Fixed const & object){
	o << object.toFloat();
	return o;
}

Fixed Fixed::operator + (const Fixed & fixed) const{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator - (const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator * (const Fixed &fixed) const{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator / (const Fixed &fixed) const{
	return Fixed(this->toFloat() / fixed.toFloat());
}

// this overloads the increment operator to
// increment the fixed point value by 1
Fixed & Fixed::operator ++ (){
	this->fixedPointValue++;
	return *this;
}

// this overloads the decrement operator to
// decrement the fixed point value by 1
Fixed & Fixed::operator -- (){
	this->fixedPointValue--;
	return *this;
}
