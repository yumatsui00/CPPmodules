#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cassert>
# include <deque>

struct pairs {
	double num;
	std::vector<pairs> p;
};

std::vector<pairs> 	vector_sort(std::vector<pairs> vec);
std::deque<pairs>	deque_sort(std::deque<pairs> deq);
void				display(std::vector<pairs> vec);

#endif