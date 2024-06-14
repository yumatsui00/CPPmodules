#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]) {
	if (argc > 1) {
		std::vector<std::string> args(argv + 1, argv + argc);
		for (size_t i = 0; i < args.size(); ++i) {
			std::transform(args[i].begin(), args[i].end(), args[i].begin(), ::toupper);
			std::cout << args[i];
			if (i < args.size() - 1) {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}