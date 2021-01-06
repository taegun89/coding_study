#include <iostream>


int main() {
	int t;
	std::cin >> t;
	
	int* result = new int[t];
	for (int s = 0; s < t; s++) {
		int num1, num2, num3;

		std::cin >> num1 >> num2;

		num3 = num1%10;
		for (int i = 1; i < num2; i++) {
			num3 = (num3 * num1)%10;
		}
		if (num3 == 0) {
			num3 = 10;
		}
		result[s] = num3;
	}

	for (int s = 0; s < t; s++) {
		std::cout << result[s] << "\n";
	}
	delete[] result;
	return 0;
}