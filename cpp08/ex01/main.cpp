#include "Span.hpp"

int main( void ) {
	try {
		Span	span(4);

		span.addNumber(2147483647);
		span.addNumber(0);
		span.addNumber(1);
		span.addNumber(-2147483648);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	try {
		Span	span(4);

		span.addNumber(2147483647);
		span.addNumber(0);
		span.addNumber(1);
		span.addNumber(-2147483648);
		span.addNumber(1);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	try {
		Span	span(1);

		span.addNumber(1);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	try {
		std::vector<int> src(1000);
		for (int i = 0; i < 1000; i++) src[i] = i;

		Span	span(1000);
		span.addNumbers(src.begin(), src.end());
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;

		Span	span2(999);
		span.addNumbers(src.begin(), src.end());
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

