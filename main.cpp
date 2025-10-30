#include "Fixed.hpp"

int main()
{
    Fixed obj1, obj2;
    obj1.setNb(5);
    obj1.print();

    obj2 = obj1;
    
    obj2.print();
    obj2.setNb(1);

    obj1.print();
    obj2.print();
}