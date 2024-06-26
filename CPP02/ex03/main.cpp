#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point	a(0, 0);
	Point	b(2, 2);
	Point	c(-2, 2);
	Point	point(1, 1);

	if (bsp(a, b, c, point) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	return 0;
}

//float 型　（単精度浮動小数点数型）　のビット表現 32bit
