#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
    private :
        static const int bitsNb;
        int              fixedPointNb;
    public :
        Fixed();
        Fixed(const Fixed &obj);
        Fixed &operator = (const Fixed &obj);
        ~Fixed();
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};


#endif