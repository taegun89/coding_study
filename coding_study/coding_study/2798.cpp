#include <iostream>
int main() {

	int N = 0; int M = 0;
	std::cin >> N;
	while (N < 3 || N > 100) {
		std::cin >> N;
		std::cout << "N을 다시 입력해주세요\n";
	}
	std::cin >> M;
	while (M < 10 || M > 300000) {
		std::cin >> M;
		std::cout << "M을 다시 입력해주세요\n";
	}
	
	int* card = new int[N];
	for (int i = 0; i < N; i++) {
		card[i] = 0;
		std::cin >> card[i];
	}

	int sum = 0;
	int result = 1;
	for (int i = 0; i < N; i++) {
		sum += card[i];
		for (int j = i+1; j < N; j++) {
			sum += card[j];
			for (int k = j+1; k < N; k++) {
				sum += card[k];
				if (sum <= M && sum > result) {
					result = sum;
//					std::cout << card[i] << " " << card[j] << " " << card[k] << std::endl;
				}
				sum -= card[k];
			}
			sum -= card[j];
		}
		sum -= card[i];
	}
	std::cout << result;
	return 0;
}