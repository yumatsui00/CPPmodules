#include "ScalarConverter.hpp"

static int	ft_stoi( const std::string& str ) {
	int num;
	std::stringstream ss(str);
	ss >> num;
	return num;
}	;

static float ft_stof( const std::string& str ) {
	float num;
	std::stringstream ss(str);
	ss >> num;
	return num;
} ;

static double ft_stod( const std::string& str ){
	double num;
	std::stringstream ss(str);
	ss >> num;
	return num;
}


bool	ft_isprint(char c) {
	return (c >= 32 && c <= 126);
} ;

bool	ft_isdigit(char c) {
	return (c >= '0' && c<= '9');
} ;

bool	ft_isinff( const std::string& input ) {
	if (input == "-inff" || input == "+inff" || input == "nanf" || input == "inff")
		return true;
	return false;
}

bool	ft_isinf( const std::string& input ) {
	if (input == "-inf" || input == "+inf" || input == "nan" || input == "inf")
		return true;
	return false;
}


bool	isChar( const std::string& input ) {
	if (input.length() != 1 ||\
		input.at(0) < std::numeric_limits<char>::min() ||\
		input.at(0) > std::numeric_limits<char>::max() ||\
		ft_isdigit(input.at(0)))
            return false;
    return true;
} ;

bool	isInt( const std::string& input, bool *offlag ) {
	unsigned long res = 0;
	if (input == "-2147483648")
		return true;
	for (size_t i = input.at(0) == '-' ? 1 : 0; i < input.length(); i++) {
		if (!ft_isdigit(input.at(i)))
			return false;
		res = res * 10 + input.at(i) - '0';
		if (res > 2147483647)
			*offlag = true;
	}
	return true;
}

bool	isFloat( const std::string& input, bool *offlag ) {
	bool	dot = false;
	unsigned long	num = 0;

	*offlag = false;
	if (ft_isinff(input))
		return true;
	if (input.at(input.length() - 1) != 'f' || input.at(input.length() - 2) == '.')
		return false;
	for (size_t i = input.at(0) == '-' ? 1 : 0; i < input.length() - 1; i++) {
		if (input.at(i) == '.' && dot)
			return false;
		else if (input.at(i) == '.') {
			dot = true;
			continue ;
		}
		if (!ft_isdigit(input.at(i)))
			return false;
		if (dot == false) {
			num = num * 10 + input.at(i) - '0';
			if ((input.at(0) != '-' && num > 2147483647) || (input.at(0) == '-' && num > 2147483648))
				*offlag = true;
		}
	}
	return true;
}

bool	isDouble( const std::string& input, bool *offlag ) {
	bool	dot = false;
	unsigned long	num = 0;

	*offlag = false;
	if (ft_isinf(input))
		return true;
	if (input.at(input.length() - 1) == '.')
		return false;
	for (size_t i = input.at(0) == '-' ? 1 : 0; i < input.length(); i++) {
		if (input.at(i) == '.' && dot)
			return false;
		else if (input.at(i) == '.') {
			dot = true;
			continue ;
		}
		if (!ft_isdigit(input.at(i)))
			return false;
		if (dot == false) {
			num = num * 10 + input.at(i) - '0';
			if ((input.at(0) != '-' && num > 2147483647) || (input.at(0) == '-' && num > 2147483648))
				*offlag = true;
		}
	}
	return true;
}

static int	getType( const std::string& input, bool* offlag ) {
	if (isChar(input))
		return CHAR;
	else if (isInt(input, offlag))
		return INT;
	else if (isFloat(input, offlag))
		return FLOAT;
	else if (isDouble(input, offlag))
		return DOUBLE;
	return ERROR;
} ;

void	outputChar(char c) {
	if (ft_isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
} ;

void	outputInt( int num, bool overflowflag ) {
	if (overflowflag) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	} else {
		if (!isprint(static_cast<char>(num)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
		std::cout << "int: " << num << std::endl;
	}
	std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << ".0" <<std::endl;
} ;

void	outputinff( const std::string& str ){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << std::endl;
	std::cout << "double: ";
	for (unsigned int i = 0; i < str.length() - 1; i++) {
		std::cout << str.at(i);
	}
	std::cout << std::endl;
} ;

void	outputFloat( const std::string& str, bool overflowflag ) {
	float f_num = ft_stof(str);

	if (ft_isinff(str))
		return outputinff(str);
	if (overflowflag) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
	} else {
		int int_num = ft_stoi(str);
		if (!ft_isprint(int_num))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(int_num) << "'" << std::endl;
		std::cout << "Int: " << int_num << std::endl;
	}
	std::cout << "float: " << f_num << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(f_num) << ".0" << std::endl;
} ;

void	outputinf( const std::string& str ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
}

void	outputDouble( const std::string& str, bool overflowflag) {
	double	d_num = ft_stod(str);

	if (ft_isinf(str))
		return outputinf(str);
	if (overflowflag) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	} else {
		int int_num = ft_stoi(str);
		if (!ft_isprint(int_num))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(int_num) << "'" << std::endl;
		std::cout << "int: " << int_num << std::endl;
	}
	std::cout << "float: " << static_cast<float>(d_num) << ".0f" << std::endl;
	std::cout << "double: " << d_num << ".0" << std::endl;
}

//*---------------------------Member Function---------------------------------
void	ScalarConverter::convert( const std::string& input ) const {
	bool	overflowflag = false;
	switch(getType(input, &overflowflag))
	{
		case CHAR:
			outputChar(input.at(0));
			break ;
		case INT:
			outputInt(ft_stoi(input), overflowflag);
			break ;
		case FLOAT:
			outputFloat(input, overflowflag);
			break ;
		case DOUBLE:
			outputDouble(input, overflowflag);
			break ;
		default:
			std::cout << "Argument <unknown type>" << std::endl;
			break ;
	}
} ;
