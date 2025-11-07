#include "Fixed.hpp"

int main( void ) {
    Fixed a(5);
    Fixed const b( Fixed( 1.12f ) / Fixed( 0.23f ) );

    // std::cout << b << std::endl;

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    // std::cout << a++ << std::endl;

    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}