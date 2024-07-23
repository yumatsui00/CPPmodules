#include "ScalarConverter.hpp"

static int	ft_stoi( const std::string& str ) {
	int num;
	std::stringstream ss(str);
	ss >> num;
	return num;
};

//普通にキャストするとinff にならない
static float ft_stof( const std::string& str ) {
	bool minusflag = (str.at(0) == '-');
	size_t i = minusflag ? 1 : 0;
	float num = 0;
	while(i < str.length()) {
		if (str.at(i) == '.' || str.at(i) == 'f')
				break;
		if (minusflag)
			num = num * 10 - (str.at(i) - '0');
		else
			num = num * 10 + (str.at(i) - '0');
		i++;
	}
	if (i != str.length() && str.at(i) == '.') {
		float	scale = 10;
		while(++i < str.length() - 1) {
			if (str.at(i) == 'f')
				break ;
			if (minusflag)
				num -= float(str.at(i) - '0') / scale;
			else
				num += float(str.at(i) - '0') / scale;
			scale *= 10;
		}
	}
	return num;
}

static double ft_stod( const std::string& str ){
	bool minusflag = (str.at(0) == '-');
	size_t i = minusflag ? 1 : 0;
	double num = 0;
	while (i < str.length()) {
		if (str.at(i) == '.' || str.at(i) == 'f')
				break;
		if (minusflag)
			num = num * 10 - (str.at(i) - '0');
		else
			num = num * 10 + (str.at(i) - '0');
		i++;
	}
	if (i != str.length() && str.at(i) == '.') {
		double	scale = 10;
		while(++i < str.length() - 1) {
			if (str.at(i) == 'f')
				break ;
			if (minusflag)
				num -= double(str.at(i) - '0') / scale;
			else
				num += double(str.at(i) - '0') / scale;
			scale *= 10;
		}
	}
	return num;
}

bool	ft_isprint(char c) {
	return (c >= 32 && c <= 126);
} ;

bool	ft_isdigit(char c) {
	return (c >= '0' && c <= '9');
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

static bool	checkInt( const std::string &str ) {
	size_t i;
	for (i = str.at(0) == '-' ? 1 : 0; i < str.length(); i++) {
		if (str.at(i) == '.')
			break;
		if (str.at(i) == 'f')
			return true;
	}
	while (++i < str.length()) {
		if (str.at(i) == 'f')
			return true;
		if (str.at(i) == '0')
			continue;
		return false;
	}
	return true;
}

static bool	checkInt2( float num ) {
	std::ostringstream oss;
    oss << num;
    std::string str = oss.str();
	return (checkInt(str));
}

static bool	checkInt3( double num ){
	std::ostringstream oss;
    oss << num;
    std::string str = oss.str();
	return (checkInt(str));
}

static bool echeck( float num ) {
	if (num <= 1000000 && num >= -1000000)
		return true;
	return false;
}

static bool sixcheck( int num ) {
	if (num / 100000 != 0 && num / 1000000 == 0)
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

static void	outputChar(char c) {
	if (ft_isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
} ;

static void	outputInt( std::string num, bool overflowflag ) {
	int number = ft_stoi(num);
	if (overflowflag) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	} else {
		if (!isprint(static_cast<char>(number)))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
		std::cout << "int: " << num << std::endl;
	}
	if (number <= 1000000 && number >= -1000000) {
		std::cout << "float: " << static_cast<float>(number) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(number) << ".0" <<std::endl;
	} else {
		float	fnum = ft_stof(num);
		double	dnum = ft_stod(num);
		std::cout << "float: " << fnum << "f" << std::endl;
		std::cout << "double: " << dnum <<std::endl;
	}
} ;

static void	outputinff( const std::string& str ){
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << std::endl;
	std::cout << "double: ";
	for (unsigned int i = 0; i < str.length() - 1; i++) {
		std::cout << str.at(i);
	}
	std::cout << std::endl;
} ;

static void	outputFloat( const std::string& str, bool overflowflag ) {
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
	float fnum = ft_stof(str);
	double dnum = ft_stod(str);
	if ((checkInt(str) || checkInt2(fnum)) && echeck(fnum) && !sixcheck(ft_stoi(str))) {
			std::cout << "float: " << fnum << ".0f" << std::endl;
			std::cout << "double: " << dnum << ".0" << std::endl;
	} else {
		std::cout << "float: " << fnum << "f" << std::endl;
		std::cout << "double: " << dnum << std::endl;
	}
} ;

static void	outputinf( const std::string& str ) {
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
}

static void	outputDouble( const std::string& str, bool overflowflag) {

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
	float f_num = ft_stof(str);
	double d_num = ft_stod(str);
	if ((checkInt(str) || checkInt3(d_num)) && echeck(f_num) && !sixcheck(ft_stoi(str))) { //float doubleは数字を６個までしか保持できない
		std::cout << "float: " << f_num << ".0f" << std::endl;
		std::cout << "double: " << d_num << ".0" << std::endl;
	} else {
		std::cout << "float: " << f_num << "f" << std::endl;
		std::cout << "double: " << d_num << std::endl;
	}
}

//*---------------------------Member Function---------------------------------
void	ScalarConverter::convert( const std::string& input ) {
	bool	overflowflag = false;
	switch(getType(input, &overflowflag))
	{
		case CHAR:
			outputChar(input.at(0));
			break ;
		case INT:
			outputInt(input, overflowflag);
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

//!------------------------Constructors & Operator----------------------------
ScalarConverter::ScalarConverter( void ) {};
ScalarConverter::~ScalarConverter( void ) {};
ScalarConverter::ScalarConverter( const ScalarConverter &src ) {
	(void)src;
};
ScalarConverter	&ScalarConverter::operator=( const ScalarConverter &rhs ) {
		(void)rhs;
		return *this;
};
