#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <string>
class HumanA {
	private:
		Weapon weap;
		std::string name;
	public:
		HumanA(std::string name, Weapon weap);
		void	attack( void );
};

#endif
