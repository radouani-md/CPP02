#include "Fixed.hpp"

const int Fixed::bitsNb = 8;

Fixed::Fixed() : fixedPointNb(0)
{
    std::cout << "Default Constractor Called" << std::endl;
}

Fixed::Fixed(const float nb)
{
    fixedPointNb =  round(nb * (1 << bitsNb));
    std::cout << "Float Constractor Called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    fixedPointNb = nb << bitsNb;
    std::cout << "Int Constractor Called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
    std::cout << "Copy Constractor Called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
        this->fixedPointNb = obj.getRawBits();
    std::cout << "Copy Assignement Operator Called" << std::endl;
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (fixedPointNb);
}
void Fixed::setRawBits( int const raw) { this->fixedPointNb = raw; }

float   Fixed::toFloat( void ) const
{
    return (fixedPointNb / (1 << bitsNb));
}

int     Fixed::toInt( void ) const
{
    return (fixedPointNb >> bitsNb);
}

std::ostream& operator<<(std::ostream& output, const Fixed &obj)
{
    output << obj.getRawBits();
    return (output);
}

Fixed::~Fixed()
{
    std::cout << "Destractor Called" << std::endl;
}