#include "Span.hpp"

Span::Span( void ) {};

Span::Span( unsigned int n ) : _maxsize(n) {};

Span::~Span( void ) {};

Span::Span( Span &src ) : _maxsize(src._maxsize) {
	for (std::vector<int>::iterator it = src._strage.begin(); it != src._strage.end(); it++) {
		_strage.push_back((*it));
	}
}

Span&	Span::operator=( Span &rhs ) {
	if (this != &rhs) {
		_maxsize = rhs._maxsize;
		for (std::vector<int>::iterator it = rhs._strage.begin(); it != rhs._strage.end(); it++) {
			_strage.push_back((*it));
		}
	}
	return *this;
}

void	Span::addNumber( int num ) {
	if (_strage.size() < _maxsize) {
		_strage.push_back(num);
	}
	else
		throw FullStrageException();
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->_strage.size() + std::distance(begin, end) > _maxsize) {
		throw FullStrageException();
	}
	this->_strage.insert(_strage.end(), begin, end);
}

unsigned int	Span::shortestSpan( void ) {
	unsigned int	ret = 4294967295;
	if (_strage.size() <= 1)
		return (0);
	if (_strage.size() == 2) {
		ret = (unsigned int)std::abs(long(_strage[0]) - long(_strage[1]));
		return (ret);
	}
	std::vector<int>::iterator it = _strage.begin();
	while (it != _strage.end()) {
		for (std::vector<int>::iterator it2 = it + 1; it2 != _strage.end(); it2++) {
			unsigned int check = (unsigned int)std::abs(long(*it) - long(*it2));
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
	if (_strage.size() <= 1)
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
