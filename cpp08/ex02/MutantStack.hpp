#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <stack>
# include <deque>

//stackはdefaultでdequeを内部コンテナにつかってる
template< typename T, class Container = std::deque< T > >
class MutantStack : public std::stack< T, Container >{
public:
	MutantStack( void ) {};
	~MutantStack( void ) {};
	MutantStack( const MutantStack& src ) { *this = src; };
	MutantStack&	operator=( const MutantStack& rhs ) {
		std::stack< T, Container >::operator=( rhs );
		return *this;
	}

	typedef	typename Container::iterator		iterator;
	typedef typename Container::const_iterator	const_iterator;

	iterator	begin() { return this->c.begin();}
	iterator	end() { return this->c.end();}
	const_iterator	begin() const { return this->begin(); }
	const_iterator	end() const { return this->end(); }
} ;


#endif