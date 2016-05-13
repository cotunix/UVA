#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

std::vector<unsigned long long> almostPrimes;
unsigned long long max = 1000000000000L;


bool isPrime(int n) {
	int sq = sqrt(n);
	for (int i = 3; i <= sq; i++) {
		if (n % i == 0)
			return false;
	}
	return true;

}


int main(void) {
	// do it once for number 2
	for (unsigned long long j = 4; j < max; j *= 2){
		almostPrimes.push_back(j);
	}
	// even numbers aren't prime
	for (unsigned long long i = 3; i < 1000000; i += 2) {
		if (isPrime(i)) {
			for (unsigned long long j = i * i; j < max; j *= i){
				almostPrimes.push_back(j);
			}
		}
	}

	int cases;
	std::cin >> cases;

	size_t vecSize = almostPrimes.size();
	unsigned long long low, high;
	while (cases--) {
		std::cin >> low;
		std::cin >> high;

		int total = 0;

		for (size_t i = 0; i < vecSize; i++) {
			if (almostPrimes[i] >= low && almostPrimes[i] <= high) {
				total++;
			}
		}

		std::cout << total << std::endl;
	}

	return 0;

}

