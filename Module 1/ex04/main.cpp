#include "replace.h"

int main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Error: wrong input" << std::endl;
		return (1);
	}

	std::ifstream fin;
	fin.open(argv[1]);
	if (!fin) {
		std::cout << "Error: input file could not be opened" << std::endl;
		return (1);
	}

	std::string fex = ".replace";
	std::string fname = argv[1];
	std::ofstream file((fname + fex).c_str());
	file.close();

	std::ofstream fout;
	fout.open((fname + fex).c_str());
	if (!fout) {
		std::cout << "Error: output file could not be opened" << std::endl;
		return (1);
	}

	replace(argv[2], argv[3], fout, fin);
	fout.close();
	fin.close();

	return (0);
}