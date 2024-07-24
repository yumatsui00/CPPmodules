#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class Array {
private:
	T*				_arr;
	unsigned int	_size;
public:
	~Array( void ) { delete [] _arr; };
	Array( void ) 			: _arr( new T() ), _size(0) {};
	Array( unsigned int n ) : _arr( new T[n] ), _size(n) {};
	Array( Array &src ) : _arr( new T[src.size()] ), _size( src.size() ){
		for (unsigned int i = 0; i < _size; i++) {
			_arr[i] = src._arr[i];
		}
	}
	Array&	operator=( Array &rhs ) {
		if (this != &rhs) {
			delete [] _arr;
			_arr = new T[rhs.size()];
			_size = rhs.size();
			for (unsigned int i = 0; i < _size; i++) {
				_arr[i] = rhs._arr[i];
			}
		}
	}
	T&	operator[](unsigned int n) const {
		if ( n >= _size )
			throw OutofBoundsException();
		return _arr[n];
	}

	unsigned int	size( void ) const { return (_size); };

	class OutofBoundsException : public std::exception {
		public:
			virtual const char* what() const throw() { return "Index is out of bounds"; }
	} ;

} ;

template < typename T >
std::ostream &operator<<( std::ostream &o, const Array<T>& arr) {
	for (unsigned int i = 0; i < arr.size(); i++) {
		o << arr[i] << " ";
	}
	return o;
}

#endif