#include <iostream>
#include <algorithm>

unsigned int female;
unsigned int male;

void year(unsigned int n) {
	for (unsigned int i = 0; i < n; i++) {
		unsigned int oldmale = male;
		unsigned int oldfemale = female;

		male = 0;
		female = 0;
		// the bees all die (RIP)
		male += oldfemale; //each female makes one male
		male += oldmale;
		female += oldmale;
		male++; // Add the male bee given by the immortal
	}
}

int main(void) {
	unsigned int n;

	while (std::cin >> n) {
		if (n == -1)
			break;

		male = 0;
		female = 0;
		year(n);
		std::cout << male << " " << male + female + 1 << std::endl;
	}

	return 0;
	
}
