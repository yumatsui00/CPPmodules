#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <map>

class BitcoinExchange {
private:
	BitcoinExchange( void );
	BitcoinExchange( const BitcoinExchange &src );
	BitcoinExchange& operator=( const BitcoinExchange& rhs );

	std::map<std::string, double>	_data;
public:
	BitcoinExchange( const std::string& file );
	~BitcoinExchange( void );

	bool	dateCheck( std::string &date );
	bool	checkYear( std::string& year );
	bool	checkMonthDate( std::string& month, std::string& date );
	bool	valueCheck( std::string& str );

	void	analyze( const std::string& inputFile );
	double	findRate( std::string &date );

	class CantOpenDataFileException : public std::exception {
		public: virtual const char* what() const throw (){ return "cannot open data file"; }
	} ;
	class NoValidDataException : public std::exception {
		public: virtual const char* what() const throw () { return "no valid data"; }
	} ;
	class CantOpenInputFileException : public std::exception {
		public: virtual const char* what() const throw (){ return "cannot open input file"; }
	} ;


} ;

#endif