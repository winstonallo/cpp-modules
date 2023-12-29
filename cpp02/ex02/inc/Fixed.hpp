#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    public:
        Fixed();
        Fixed(const Fixed & fixed);
        Fixed(const int intValue);
        Fixed(const float floatValue);
        Fixed & operator=(const Fixed & fixed);
        Fixed & operator-(const Fixed & fixed);
        Fixed operator+(const Fixed & fixed);
        Fixed & operator++();
        ~Fixed();

        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;

        int operator>(const Fixed & fixed);
        int operator<(const Fixed & fixed);
        int operator>=(const Fixed & fixed);
        int operator<=(const Fixed & fixed);
        int operator==(const Fixed & fixed);
        int operator!=(const Fixed & fixed);
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
};

#endif