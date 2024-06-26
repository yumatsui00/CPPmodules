#include "Point.hpp"

static Fixed	abs( Fixed x ) {
	if (x < 0)
		return x * -1;
	return x;
}

static Fixed	area(Point a, Point b, Point c) {
	return ( ((a.getX() * (b.getY() - c.getY())) + \
				b.getX() * (c.getY() - a.getY()) + \
		 			c.getX() * (a.getY() - b.getY())) / 2 );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed	wholearea = abs(area(a, b, c));
	Fixed	area1 = abs(area(point, a, b));
	Fixed	area2 = abs(area(point, b, c));
	Fixed	area3 = abs(area(point, c, a));
	std::cout << wholearea << std::endl;
	std::cout << area1 << std::endl;
	std::cout << area2 << std::endl;
	std::cout << area3 << std::endl;
	if (area1 == 0 || area2 == 0 || area3 == 0 || wholearea == 0)
		return false;
	return ( wholearea == area1 + area2 + area3 );
}
