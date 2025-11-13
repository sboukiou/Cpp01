#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <string>
class HumanB {
	private:
		Weapon *weap;
		std::string name;
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon& w);
		void	attack( void );
};

#endif
