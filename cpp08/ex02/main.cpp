#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "mstack = ";
	while (it != ite)
	{
		std::cout << *it << " " << std::flush;
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "-----------------------------------------" << std::endl;

	MutantStack<int> mstack2;
	mstack2.push(5);
	mstack2.push(17);
	std::cout << "top = " << mstack2.top() << std::endl;
	mstack2.pop();
	std::cout << "size = " << mstack2.size() << std::endl;
	mstack2.push(3);
	mstack2.push(5);
	mstack2.push(737);
	mstack2.push(0);
	MutantStack<int>::const_iterator cit = mstack2.begin();
	MutantStack<int>::const_iterator cite = mstack2.end();
	++cit;
	--cit;
	std::cout << "mstack = ";
	while (cit != cite)
	{
		std::cout << *cit << " " << std::flush;
		++cit;
	}
	std::cout << std::endl;

	std::cout << "-----------------------------------------" << std::endl;

	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "top = " << list.back() << std::endl;
	list.pop_back();
	std::cout << "size = " <<  list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	std::list<int>::iterator itl = list.begin();
	std::list<int>::iterator itle = list.end();
	++itl;
	--itl;
	std::cout << "list = ";
	while (itl != itle)
	{
		std::cout << *itl << " " << std::flush;
		++itl;
	}
	std::cout << std::endl;
	std::list<int> l(list);
}