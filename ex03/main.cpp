#include "Point.hpp"

int main()
{

    Point a(0, 0);
    Point b(10, 30);
    Point c(20, 0);
    // Point point(25, 10);
    Point point(10, 15);
    a = b;

  //  if (bsp(a, b, c, point))
  //    std::cout <<"Inside" << std::endl;
  //  else
  //    std::cout <<"Outside" << std::endl;;
  std::cout << a.getX() << "==" << a.getY() << std::endl;
  std::cout << b.getX() << "==" << b.getY();
   return 0;
}