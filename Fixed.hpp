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
        ~Fixed();
        void setNb(int nb)
        {
            fixedPointNb = nb;
        }
        void print()
        {
            std::cout << fixedPointNb << std::endl;
        }
};


#endif