#include <iostream>

int main() {
    long long N, reversedN = 0;
    std::cin >> N; // Read the input number

    // Reverse the number
    while (N != 0) {
        reversedN = reversedN * 10 + N % 10;
        N /= 10;
    }

    std::cout << reversedN << std::endl; // Print the reversed number

    return 0;
}
