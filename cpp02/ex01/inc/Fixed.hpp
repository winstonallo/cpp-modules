#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <type_traits>
#include <cmath>

class Fixed{
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &src);
        Fixed & operator=(Fixed const &rhs);
        Fixed(int const n);
        Fixed(float const n);
        int getRawBits(void)const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int toInt(void)const;
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);

#endif