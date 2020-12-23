#include <iostream>
#include <cmath>
int main() {
	int count = 0;
	std::cin >> count;
	int* result = new int[count];
	
	for (int i = 0; i < count; i++) {
		int x1 = 0; int y1 = 0; int r1 = 0;
		int x2 = 0; int y2 = 0; int r2 = 0;
		int sol_count = 0;
		std::cin >> x1;
		
		std::cin >> y1;
		
		std::cin >> r1;
		
		std::cin >> x2;
		
		std::cin >> y2;
		
		std::cin >> r2;
		

		double d = std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

		if (d == 0 && r1 == r2) {
			result[i] = -1;
		}
		else if (d < r1 + r2 && d > std::abs(r1 - r2)) {
			result[i] = 2;
		}
		else if (r1 + r2 == d || std::abs(r1-r2) == d) {
			result[i] = 1;
		}
		else {
			result[i] = 0;
		}
	}
	for (int i = 0; i < count; i++) {
		std::cout << result[i] << "\n";
	}
	delete[] result;
	return 0;
}