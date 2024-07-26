#include "PmergeMe.hpp"

int	stoi( std::string str ) {
	int	ret = 0;

	for (int i = 0; i < str.length(); i++) {
		ret += ret * 10 + str.length() - '0';
		if (ret < 0)
			return -1;
	}
	return ret;
}

int main(int argc, char** argv) {
	if (argc < 2) {
		std::cerr << "Invalid num of args" << std::endl;
		return 1;
	}
	std::string			unsorted = "Before:  ";
	std::vector<int>	vec;
	for (int i = 1; i < argc; i++) {
		int	num = stoi(argv[i]);
		if (num <= 0) {
			std::cout << "Invalid number" << std::endl;
			return 1;
		}
		unsorted += argv[i] + ' ';
		vec.push_back(num);
	}
	

}