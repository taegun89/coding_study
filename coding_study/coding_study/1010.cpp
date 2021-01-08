#include <iostream>


int main() {
	int t;
	std::cin >> t;
	for (int s = 0; s < t; s++) {
		int num1, num2, son, mom;
		double sum = 1;
		std::cin >> num1 >> num2;
		son = 1; mom = 1;
		for (int i = 0; i < num1; i++) {
			sum *= (double)(num2 - i) / (num1 - i);
		}
		std::cout.precision(15);
		std::cout << sum << std::endl;
	}
	return 0;
}