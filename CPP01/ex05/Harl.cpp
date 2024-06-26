#include "Harl.hpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::invalid( void ) {
	std::cout << "[ Invalid Args ]\nformat: ./ex05 COMPLAIN" << std::endl;
	std::cout << "COMPLAIN can be ... \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\"" << std::endl;
}


void	Harl::complain( std::string level )
{
	t_func	funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::invalid};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	int	i = 0;
	while (i < 4) {
		if (!levels[i].compare(level))
			break ;
		i++;
	}
	(this->*funcs[i])();
}
