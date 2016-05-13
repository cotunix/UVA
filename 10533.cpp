#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int n) {
	// special cases to improve runtime
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	int sq = sqrt(n);

	for (int i = 3; i <= sq; i+= 2) {
		if (n % i == 0)
			return false;
	}
	return true;

}

int main(void) {
	int cases;
	scanf_s("%d", &cases);

	
	unsigned long long low, high;
	while (cases--) {
		scanf_s("%d", &low);
		scanf_s("%d", &high);

		int total = 0;

		for (int i = low; i < high; i++) {
			if (isPrime(i)) {
				for (int j = i; j > 0; j /= 10){

				}
			}

		}

		std::cout << total << std::endl;
	}

}