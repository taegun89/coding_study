#include <iostream>
#include <vector>

long long sum(std::vector<int>& a);

int main() {


	return 0;
}

long long sum(std::vector<int>& a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}

	return ans;
}