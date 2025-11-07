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
    return ((float)(fixedPointNb) / (1 << bitsNb));
}

int     Fixed::toInt( void ) const
{
    return (fixedPointNb >> bitsNb);
}

std::ostream& operator<<(std::ostream& output, const Fixed &obj)
{
    output << obj.toFloat();
    return (output);
}

Fixed::~Fixed()
{
    std::cout << "Destractor Called" << std::endl;
}




Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

bool    Fixed::operator<(const Fixed &obj) const
{
    return (fixedPointNb < obj.fixedPointNb);
}
bool    Fixed::operator>(const Fixed &obj) const
{
    return (fixedPointNb > obj.fixedPointNb);
}
bool    Fixed::operator>=(const Fixed &obj) const
{
    return (fixedPointNb >= obj.fixedPointNb);
}
bool    Fixed::operator<=(const Fixed &obj) const
{
    return (fixedPointNb <= obj.fixedPointNb);
}
bool    Fixed::operator==(const Fixed &obj) const
{
    return (fixedPointNb == obj.fixedPointNb);
}
bool    Fixed::operator!=(const Fixed &obj) const
{
    return (fixedPointNb != obj.fixedPointNb);
}


Fixed  Fixed::operator+(const Fixed &obj) const
{
    Fixed result;
    result.setRawBits(obj.fixedPointNb + fixedPointNb);
    return (result);
}

Fixed  Fixed::operator-(const Fixed &obj) const
{
    Fixed result;
    result.setRawBits(obj.fixedPointNb - fixedPointNb);
    return (result);
}
Fixed  Fixed::operator*(const Fixed &obj) const
{
    Fixed result;
    long res = obj.fixedPointNb;
    result.setRawBits((res * fixedPointNb) >> bitsNb);
    return (result);
}
Fixed  Fixed::operator/(const Fixed &obj) const
{
    Fixed result;
    long res = fixedPointNb * (1 << bitsNb);
    result.setRawBits(res / obj.fixedPointNb);
    return (result);
}

Fixed&   Fixed::operator++()
{
    fixedPointNb++;
    return (*this);
}
Fixed   Fixed::operator++(int)
{
    ++fixedPointNb;
    return(*this);
}
Fixed&   Fixed::operator--()
{
    fixedPointNb--;
    return (*this);
}
Fixed   Fixed::operator--(int)
{
    --fixedPointNb;
    return (*this);
}