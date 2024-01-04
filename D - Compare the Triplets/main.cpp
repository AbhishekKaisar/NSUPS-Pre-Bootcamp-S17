#include <iostream>

void compareTriplets(int a[3], int b[3], int result[2]) {
    result[0] = 0;
    result[1] = 0;

    for (int i = 0; i < 3; ++i) {
        if (a[i] > b[i]) {
            result[0]++;
        } else if (a[i] < b[i]) {
            result[1]++;
        }
    }
}

int main() {
    int a[3], b[3], result[2];

    for (int i = 0; i < 3; ++i) {
        std::cin >> a[i];
    }

    for (int i = 0; i < 3; ++i) {
        std::cin >> b[i];
    }

    compareTriplets(a, b, result);

    std::cout << result[0] << " " << result[1] << std::endl;

    return 0;
}
