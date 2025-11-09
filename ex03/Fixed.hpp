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
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);

        bool    operator<(const Fixed &obj2) const;
        bool    operator>(const Fixed &obj2) const;
        bool    operator<=(const Fixed &obj2) const;
        bool    operator>=(const Fixed &obj2) const;
        bool    operator==(const Fixed &obj2) const;
        bool    operator!=(const Fixed &obj2) const;

        Fixed  operator+(const Fixed &obj2) const;
        Fixed  operator-(const Fixed &obj2) const;
        Fixed  operator*(const Fixed &obj2) const;
        Fixed  operator/(const Fixed &obj2) const;

        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);
};

std::ostream& operator<<(std::ostream& output, const Fixed &obj);


#endif