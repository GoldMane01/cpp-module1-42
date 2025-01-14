#include <iostream>

int main(int argc, char* argv[]) {
	std::string output;
	std::string input;
	int i = 1;

	if (argc == 1) {
		std::cout << "* PINGA *" << '\n';
	} else {
		while (i < argc) {
			input = argv[i];
			for (unsigned int j = 0; j < input.length(); j++) {
				output += toupper(static_cast<unsigned char>(input[j]));
			}
			i++;
		}
		std::cout << output << '\n';
	}
	return 0;
}