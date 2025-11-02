#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <string.h>
// #include <fstream>
#include <cmath>

class Fixed
{
    private :
        static const int bitsNb;
        int              fixedPointNb;
    public :
        Fixed();
        Fixed(const float nb);
        Fixed(const int nb);
        Fixed(const Fixed &obj);
        Fixed &operator = (const Fixed &obj);
        ~Fixed();
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& output, const Fixed &obj);

#endif