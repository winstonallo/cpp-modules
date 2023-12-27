#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <type_traits>

class Fixed{
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const & src);
        Fixed&operator=(Fixed const&rhs);
        int getRawBits()const;
        void setRawBits(int const raw);
	private:
		int	fixedPointValue;
		static const int nFractBits=8;
};

#endif