#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <map>

std::map<int, bool> is_prime;
bool isPrime(int n) {
	// special cases to improve runtime
	if (n == 2)
		return true;
	else if (n % 2 == 0)
		return false;
	else if (is_prime.find(n) != is_prime.end())
		return true;

	int sq = (int)sqrt(n);
	for (int i = 3; i <= sq; i += 2) {
		if (n % i == 0)
			return false;
	}
	return true;

}

int main(void) {
	int cases;	
	int* total = new int[1000000];
	total[0] = 0;
	total[1] = 0;
	total[2] = 1;
	int sum; 
	int temp = 3;
	unsigned int low, high;
	for (int i = 3; i < 1000000; i += 2){
		if (isPrime(i)) {
			// store this in our map to increase runtime
			is_prime[i] = true;
			sum = 0;
			for (int j = i; j > 0; j /= 10) {
				sum += j % 10;
			}
			if (isPrime(sum)) {
				// we found a digit prime, fill in the between values of the array
				for (int k = temp; k < i; k++){
					total[k] = total[k - 1];
				}
				// increment the number of prime digits since 0 and set our filler to the next index
				total[i] = total[i - 1] + 1;
				temp = i + 1;
			}			
		}
	}
	// fill in any remaining values we have
	for (int j = temp; j < 1000000; j++)
		total[j] = total[j - 1];
	
	std::cin >> cases;
	while (cases--) {
		std::cin >> low;
		std::cin >> high;


		std::cout << total[high] - total[low - 1] << std::endl;
	}
	delete[] total;
	return 0;
}