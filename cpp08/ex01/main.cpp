#include "Span.hpp"

int main( void ) {
	Span	span(3);

	span.addNumber(2147483647);
	span.addNumber(-2147483648);
	span.addNumber(0);
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
}