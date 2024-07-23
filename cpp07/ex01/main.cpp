#include "Iter.hpp"

int main( void ) {
	int i_arr[] = {1, 2, 3, 4, 5};
	std::cout << "arr1: " << std::flush;
	iter(i_arr, 5, &out);
	std::cout << std::endl;

	std::string	s_arr[] = { "hel", "lo", "Wor", "ld", "!" };
	std::cout << "arr2: " << std::flush;
	iter(s_arr, 5, &out);
	std::cout << std::endl;

	float f_arr[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	std::cout << "arr3: " << std::flush;
	iter(f_arr, 5, &out);
	std::cout << std::endl;

	bool b_arr[] = { true, true, false, false, true };
	std::cout << "arr4: " << std::flush;
	iter(b_arr, 5, &out);
	std::cout << std::endl;

	char	c_arr[] = { 'a', '\0', '1', ' ', '1' };
	std::cout << "arr5: " << std::flush;
	iter(c_arr, 5, &out);
	std::cout << std::endl;
}