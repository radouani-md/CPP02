#include "Fixed.hpp"

int main( void ) {
    Fixed a(4.66f);
    Fixed b(9);

    
    std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}