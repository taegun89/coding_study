#include <iostream>
#include <cmath>
double vec_mat(int count, int sub, int add, int x_p, int y_p, int* x_, int* y_, int index);
int main() {
	int t_case = 0;
	int point_count = 0;
	

	std::cin >> t_case;

	for (int i = 0; i < t_case; i++) {
		std::cin >> point_count;
		
		int* x_ = new int[point_count];
		int* y_ = new int[point_count];
		for (int j = 0; j < point_count; j++) {
			std::cin >> x_[j] >> y_[j];
		}
		std::cout.precision(12);
		std::cout << vec_mat(point_count, 0, 0, 0, 0, x_, y_, 0) << "\n";



		delete[] x_;
		delete[] y_;
	}
	return 0;
}

double vec_mat(int count, int sub, int add, int x_p, int y_p, int* x_, int* y_, int index) {
	if (sub + add == count) {
		return std::sqrt((double)x_p * x_p + (double)y_p * y_p);
	}
	double min = 3000000.0;
	double temp;
	if (add < count / 2) { temp = vec_mat(count, sub, add + 1, x_p + x_[index], y_p + y_[index], x_, y_, index + 1); min = (temp < min) ? temp : min; }
	if(sub < count/2){ temp = vec_mat(count, sub+1, add, x_p - x_[index], y_p - y_[index], x_, y_, index + 1); min = (temp < min) ? temp : min; }
	return min;
}