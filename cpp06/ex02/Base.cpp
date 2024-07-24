#include "Base.hpp"

void	identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "This is 'A'" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is 'B'" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is 'C'" << std::endl;
	else
		std::cout << "Unknown Type" << std::endl;
}

void	identify(Base &p) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "This is 'A'" << std::endl;
		(void)a;
	} catch (const std::exception &e) {}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "This is 'B'" << std::endl;
		(void)b;
	} catch (const std::exception &e) {}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "This is 'C'" << std::endl;
		(void)c;
	} catch (const std::exception &e) {}
}

Base*	generate( void ) {
	std::srand(time(0));
	int i = rand();
	if (i % 3 == 0)
		return new A;
	else if (i % 3 == 1)
		return new B;
	else
		return new C;
} ;

