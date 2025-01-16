#include "replace.h"

void replace(const std::string& s1, const std::string& s2, std::ofstream& fout, std::ifstream& fin) {
	char c;
	std::string line = "";

	while (fin.get(c)) {
		if (s1[0] != c) {
			fout << c;
		} else {
			line += c;
			while (line.length() != s1.length() && fin.get(c)) {
				line += c;
			}
			if (line == s1) {
				fout << s2;
			} else {
				fout << line;
			}
			line = "";
		}
	}
}