#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	float				_fixedPointNumber;
	static const int	_fractionalBits = 8;
public:
	Fixed( void );
	Fixed( const Fixed &rhs );
	Fixed&	operator=( const Fixed &rhs );

	Fixed( const int num ); //!add
	Fixed( const float num ); //!add

	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	int	toInt( void ) const; //!add
	float	toFloat( void ) const; //!add
};

std::ostream & operator<<( std::ostream &o, Fixed const &i );



#endif