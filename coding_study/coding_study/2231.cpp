#include <iostream>
int construct(int a);

int main() {

	int N;
	std::cin >> N;
	for (int i = 0; i < 1000000; i++) {
		if (N == construct(i)) {
			std::cout << i << "\n" ;
			return 0;
		}
	}
	std::cout << 0 << "\n";
	return 0;
}


int construct(int a) {
	int temp = a;
	int sum = a;
	int n = 10;
	int n2 = 1;
	while (temp % n != 0){
		sum = sum + (temp % n)/n2;
		temp = temp - temp % n;
		n = n * 10;
		n2 = n2 * 10;
//		std::cout << sum << std::endl;
	}
	if (sum < 0) {
		sum = 0;
	}
	return sum;
}
