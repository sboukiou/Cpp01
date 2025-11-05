#include <iostream>


int main(void) {

	std::string var = "HI THIS IS BRAIN";

	std::string *strPTR = &var;
	std::string& strREF = var;
	std:: cout << "The memory address of the string var : [" << &var << "]\n";
	std:: cout << "The memory address held by strPRT : [" << strPTR << "]\n";
	std:: cout << "The memory address held by strREF : [" << &strREF << "]\n";

	std:: cout << "The value of the string variable.[" << var << "]\n";
	std:: cout << "• The value pointed to by stringPTR.[" << *strPTR << "]\n";
	std:: cout << "• The value pointed to by stringREF.[" << strREF << "]\n";
	return (0);
}
