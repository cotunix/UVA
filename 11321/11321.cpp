#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> tempvec;
	std::vector<std::vector<int> > toSort;
	int cas;
	int m;
	int temp;
	std::vector<int> cases;
	std::vector<int> mod;
	while (true) {
		std::cin >> cas;
		std::cin >> m;
		if (cas == 0 && m == 0)
			break;
		cases.push_back(cas);
		mod.push_back(m);

		for (int i = 0; i < cas; i++){
			std::cin >> temp;
			tempvec.push_back(temp);
		}
		toSort.push_back(tempvec);
		tempvec.clear();
	}
	for (size_t i = 0; i < cases.size(); i++) {
		std::sort(toSort[i].begin(), toSort[i].end(), [mod, i](int a, int b) {
			if (a % mod[i] != b % mod[i])
				return (a % mod[i]) < (b % mod[i]);
			else {
				if (a % 2 == 1 && b % 2 == 0 || a % 2 == -1 && b % 2 == 0)
					return true;
				if (a % 2 == 0 && b % 2 == 1 || a % 2 == 0 && b % 2 == -1)
					return false;
				if (a % 2 == 0 && b % 2 == 0 || a % 2 == 0 && b % 2 == 0)
					return a < b;
				return b < a;
			}
		});
		std::cout << cases[i] << " " << mod[i] << std::endl;
		for (int j = 0; j < cases[i]; j++) {
			std::cout << toSort[i][j] << std::endl;
		}
	}
	std::cout << "0 0" << std::endl;
	
}