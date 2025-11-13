#include <cstring>
#include <iostream>
#include <fstream>
#include <string>

static bool	file_exists (const std::string& name) {
    std::ifstream f(name.c_str());
    return f.good();
}

static bool	oldStrFound(std::string str, int idx, char *var) {
	int count = 0;;

	while (var[count]) {
		if (var[count] != str[idx])
			return (false);
		count += 1;
		idx += 1;
	}
	return (true);
}

int main( int ac, char **av ) {

	std::ifstream file;
	std::ofstream newFile;
	std::string	fileContent;
	std::string	lineBuff;
	std::string	newName;
	std::string	newFileContent;
	int			oldCount = 0;
	int			newCount = 0;

	if (ac != 4) {
		std::cerr << "[Error]: Number of arguments is invalid\n";
		return (1);
	}
	if (file_exists(av[1]) == false) {
		std::cerr << "[Error]: Given file doesn't exist\n";
		return (1);
	}
	file.open(av[1]);
	while (std::getline(file, lineBuff)) {
		fileContent += lineBuff;
		fileContent.push_back('\n');
	}
	newName = av[1];;
	newName  += ".replace";
	newFile.open(newName);
	while (fileContent[oldCount]) {
		if (oldStrFound(fileContent, oldCount, av[2]) == true) {
			newFileContent += av[3];
			oldCount += strlen(av[2]);
			newCount += strlen(av[3]);
		}
		else
			newFileContent += fileContent[oldCount];

		oldCount += 1;
		newCount += 1;
	}
	newFile << newFileContent;
	newFile.close();

	return (0);
}
