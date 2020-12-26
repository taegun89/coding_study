#include <iostream>

int main() {
	int test_case = 0;
	std::cin >> test_case;
	for (int i = 0; i < test_case; i++) {
	int count = 0;

		int x1, y1, x2, y2; x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	
	std::cin >> x1 >> y1 >> x2 >> y2;
	int planet_count = 0;
	std::cin >> planet_count;

		for (int k = 0; k < planet_count; k++) {
			int cx, cy, cr; cx = 0; cy = 0; cr = 0;

			std::cin >> cx >> cy >> cr;
			
			cr = cr * cr;
			double result1, result2; result1 = 0.0; result2 = 0.0;

			result1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
			result2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
			
			if (cr >= result1 && cr >= result2) {
			}
			else if (cr <= result1 && cr <= result2) {
			}
			else {
				count++;
			}
		}
		std::cout << count << "\n";
	}
	return 0;
}

