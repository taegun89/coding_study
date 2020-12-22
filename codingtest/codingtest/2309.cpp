#include <iostream>
#include <algorithm>
int main() {

	int height[9];
	int ch[7];
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		ch[i] = 0;
	}
	for (int i = 0; i < 9; i++) {
		height[i] = 0;
		std::cin >> height[i];
		if (height[i] < 0 && height[i] > 100) {
			std::cout << "키를 다시 입력해주세요\n";
			std::cin >> height[i];
		}
		sum += height[i];
	}
	int temp = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if (height[i] > height[j]) {
				temp = height[i];
				height[i] = height[j];
				height[j] = temp;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		sum -= height[i];
		for (int j = i + 1; j < 9; j++) {
			sum -= height[j];
			if (sum == 100) {
				for (int k = 0; k < 9; k++) {
					if( k != i && k != j)
					std::cout << height[k] << "\n";
				}
				return 0;
			}
			sum += height[j];
		}
		sum += height[i];
	}
	
	return 0;
}