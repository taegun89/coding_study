#include <iostream>

int fibo(int num);

int main() {
    int count = 0;

    std::cin >> count;
    int **result = new int*[count];
    for (int i = 0; i < count; i++) {
        result[i] = new int[2];

        int number = 0;
        std::cin >> number;

        if (number == 0) {
            result[i][0] = 1;
            result[i][1] = fibo(number);
        }
        else {
            result[i][0] = fibo(number-1);
            result[i][1] = fibo(number);
        }
    }

  
    for (int i = 0; i < count; i++) {
        std::cout << result[i][0] << " " << result[i][1] << "\n";
    }


    for (int i = 0; i < count; i++) {
        delete[] result[i];
    }
    delete[] result;
    return 0;
}

int fibo (int num) {
    if (num == 0 || num == -1) {
        return 0;
    }
    else if (num == 1) {
        return 1;
    }
    else {
        int* fibo = new int[num+1];
        int ret = 0;
        for (int i = 0; i < num+1; i++) {
            fibo[i] = 0;
        }
        fibo[0] = 0; fibo[1] = 1;
        for (int i = 2; i < num+1; i++) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
        ret = fibo[num];
        delete[] fibo;
        return(ret);
    }
}