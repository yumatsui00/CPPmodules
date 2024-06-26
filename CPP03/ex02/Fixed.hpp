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
	Fixed( const int num );
	Fixed( const float num );
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	int	toInt( void ) const;
	float	toFloat( void ) const;

	bool	operator>( const Fixed &rhs ) const;
	bool	operator<( const Fixed &rhs ) const;
	bool	operator>=( const Fixed &rhs ) const;
	bool	operator<=( const Fixed &rhs ) const;
	bool	operator==( const Fixed &rhs ) const;
	bool	operator!=( const Fixed &rhs ) const;

	Fixed	operator+( const Fixed &rhs ) const;
	Fixed	operator-( const Fixed &rhs ) const;
	Fixed	operator*( const Fixed &rhs ) const;
	Fixed	operator/( const Fixed &rhs ) const;

	Fixed&	operator++( void );
	Fixed	operator++( int );
	Fixed&	operator--( void );
	Fixed	operator--( int );

	static Fixed&	min( Fixed &lhs, Fixed &rhs );
	static const Fixed&	min( const Fixed &lhs, const Fixed &rhs );
	static Fixed&	max( Fixed &lhs, Fixed &rhs );
	static const Fixed& max( const Fixed &lhs, const Fixed &rhs );
};

std::ostream & operator<<( std::ostream &o, Fixed const &i );

//演算子に対してオーバーロードしている

#endif