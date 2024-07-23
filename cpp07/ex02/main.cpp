#include "Array.hpp"

int main()
{
	Array<int> i_arr(5);
	for (unsigned int i = 0; i < i_arr.size(); i++) {
		i_arr[i] = i;
	}
	std::cout << i_arr << std::endl;
	{
		Array<int> i_cpy(i_arr);
	}
	std::cout << i_arr << std::endl; //deep copy;

	Array<float> f_arr(5);
	for (unsigned int i = 0; i < f_arr.size(); i++) {
		f_arr[i] = i * 1.1;
	}
	std::cout << f_arr << std::endl;

	Array<char> c_arr(5);
	for (unsigned int i = 0; i < c_arr.size(); i++) {
		c_arr[i] = 'a' + i;
	}
	std::cout << c_arr << std::endl;

	try {
		std::cout << c_arr[5] << std::endl;
	} catch ( Array<char>::OutofBoundsException& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}