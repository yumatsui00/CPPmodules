#include "RPN.hpp"

RPN::RPN( void ) {};

RPN::~RPN( void ) {};

RPN::RPN( RPN &src ) {
	*this = src;
};

RPN&	RPN::operator=( RPN &rhs ) {
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

bool	isnum( std::string &year ) {
	for(size_t i = 0; i < year.length(); i++ ) {
		if (!std::isdigit(year.at(i)))
			return false;
	}
	return true;
}

bool	issign( std::string &s ) {
	if (s == "*" || s == "/" || s == "+" || s == "-")
		return true;
	return false;
}

void	err( void ) {
	std::cout << "Error: Invalid arg" << std::endl;
	return ;
}

long	calculate(int a, int b, char sign) {
	if (sign == '+')
		return a + b;
	else if (sign == '-')
		return a - b;
	else if (sign == '*')
		return a * b;
	else
		return a / b;
}


void	RPN::calc( std::string str ) {
	if (str.empty())
		throw SyntaxErrorException();

	for (std::string::iterator it = str.begin(); it != str.end(); it++) {
		if (std::isspace(*it))
			continue ;
		if (std::isdigit(*it))
			_strage.push((*it) - '0');
		else {
			if (_strage.size() < 2)
				throw SyntaxErrorException();
			int	num1 = _strage.top();
			_strage.pop();
			int	num2 = _strage.top();
			_strage.pop();
			_strage.push(calculate(num2, num1, (*it)));
		}
	}
	if (_strage.size() != 1)
		throw SyntaxErrorException();
	std::cout << _strage.top() << std::endl;
}
