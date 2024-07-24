#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>


template < typename T >
bool	easyfind( T &container, int value ) {
	if (std::find( container.begin(), container.end(), value ) != container.end() ) {
		std::cout << value << " Found" <<std::endl;
		return true;
	}
	else
		std::cout << value << " not Found" << std::endl;
	return false;
}


#endif