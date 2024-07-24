#include "Span.hpp"

Span::Span( void ) {};

Span::Span( unsigned int n ) : _currentsize(0), _maxsize(n) {};

Span::~Span( void ) {};

Span::Span( Span &src ) : _currentsize(src._currentsize), _maxsize(src._maxsize) {
	for (std::vector<int>::iterator it = src._strage.begin(); it != src._strage.end(); it++) {
		_strage.push_back((*it));
	}
}

Span&	Span::operator=( Span &rhs ) {
	if (this != &rhs) {
		_currentsize = rhs._currentsize;
		_maxsize = rhs._maxsize;
		for (std::vector<int>::iterator it = rhs._strage.begin(); it != rhs._strage.end(); it++) {
			_strage.push_back((*it));
		}
	}
	return *this;
}

void	Span::addNumber( int num ) {
	if (_currentsize < _maxsize) {
		_strage.push_back(num);
		_currentsize++;
	}
	else
		std::cout << "strage is full" << std::endl;
}

unsigned int	Span::shortestSpan( void ) {
	unsigned int	ret = 4294967295;
	if (_currentsize <= 1)
		return (0);
	if (_currentsize == 2) {
		ret = (unsigned int)std::abs(long(_strage[0]) - long(_strage[1]));
		return (ret);
	}
	std::vector<int>::iterator it = _strage.begin();
	while (it != _strage.end()) {
		for (std::vector<int>::iterator it2 = it + 1; it2 != _strage.end(); it2++) {
			unsigned int check = (unsigned int)std::abs((*it) - (*it2));
			std::cout << "check " << check << std::endl;
			if (check < ret)
				ret = check;
		}
		it++;
	}
	return ret;
}

unsigned int	Span::longestSpan( void ) {
	unsigned int	ret;
	long			min;
	long			max;
	if (_currentsize <= 1)
		return (0);
	std::vector<int>::iterator it = _strage.begin();
	min = (*it);
	max = (*it);
	while (++it != _strage.end()) {
		if (min > (*it))
			min = (*it);
		else if (max < (*it))
			max = (*it);
	}
	ret = (unsigned int)(max - min);
	return ret;
}
