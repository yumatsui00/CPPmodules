#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point	a(0, 0);
	Point	b(2, 2);
	Point	c(-2, 2);
	Point	point(0, 1);

	if (bsp(a, b, c, point) == true)
		std::cout << "The point is in the triangle!" << std::endl;
	else
		std::cout << "False" << std::endl;
	return 0;
}
