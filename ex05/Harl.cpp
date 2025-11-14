#include "./Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-\
triple-pickle-specialketchup burger. I really do!";
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. \
You didn’t put\
enough bacon in my burger! \
If you did, I wouldn’t be asking for more!";
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming for\
years, whereas you started working here just last month.";
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now.";
}

void Harl::complain(std::string level) {
	std::string levels[LVL_SIZE];
	void (Harl::*fptr[LVL_SIZE])();

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	fptr[0] = &Harl::debug;
	fptr[1] = &Harl::info;
	fptr[2] = &Harl::warning;
	fptr[3] = &Harl::error;


	for (int i = 0; i < LVL_SIZE;i += 1) {
		if (level == levels[i]) {
			(this->*fptr[i])();
			return ;
		}
	}
	std::cerr << "The given level is invalid\n";
}
