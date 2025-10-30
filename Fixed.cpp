#include "Fixed.hpp"

const int Fixed::bitsNb = 8;

Fixed::Fixed() : fixedPointNb(0)
{
    std::cout << "Default Constractor Called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
    std::cout << "Copy Constractor Called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destractor Called" << std::endl;
}