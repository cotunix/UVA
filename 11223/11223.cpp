#include <iostream>
#include <string>
#include <sstream>
#include <map>


int main(void) {
	int cases;
	char c;
	std::string input;
	std::map<std::string, char> m;

	m[".-"] = 'A';
	m["-..."] = 'B';
	m["-.-."] = 'C';
	m["-.."] = 'D';
	m["."] = 'E';
	m["..-."] = 'F';
	m["--."] = 'G';
	m["...."] = 'H';
	m[".."] = 'I';
	m[".---"] = 'J';
	m["-.-"] = 'K';
	m[".-.."] = 'L';
	m["--"] = 'M';
	m["-."] = 'N';
	m["---"] = 'O';
	m[".--."] = 'P';
	m["--.-"] = 'Q';
	m[".-."] = 'R';
	m["..."] = 'S';
	m["-"] = 'T';
	m["..-"] = 'U';
	m["...-"] = 'V';
	m[".--"] = 'W';
	m["-..-"] = 'X';
	m["-.--"] = 'Y';
	m["--.."] = 'Z';
	m["-----"] = '0';
	m[".----"] = '1';
	m["..---"] = '2';
	m["...--"] = '3';
	m["....-"] = '4';
	m["....."] = '5';
	m["-...."] = '6';
	m["--..."] = '7';
	m["---.."] = '8';
	m["----."] = '9';
	m[".-.-.-"] = '.';
	m["--..--"] = ',';
	m["..--.."] = '?';
	m[".----."] = '\'';
	m["-.-.--"] = '!';
	m["-..-."] = '/';
	m["-.--."] = '(';
	m["-.--.-"] = ')';
	m[".-..."] = '&';
	m["---..."] = ':';
	m["-.-.-."] = ';';
	m["-...-"] = '=';
	m[".-.-."] = '+';
	m["-....-"] = '-';
	m["..--.-"] = '_';
	m[".-..-."] = '"';
	m[".--.-."] = '@';

	std::cin >> cases;
	std::getline(std::cin, input);
	for (int i = 0; i < cases; i++) {
		// add a line seperating cases
		if (i > 0)
			std::cout << std::endl;
		std::cout << "Message #" << i + 1 << std::endl;

		
		std::getline(std::cin, input);
		std::stringstream sin;
		sin << input;

		while (sin >> input) {
			std::cout << m[input];
			// code to detect if there should be a space
			if (sin.good()) {
				c = sin.get();
				c = sin.peek();
				if (c == ' ')
					std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	return 0;
}