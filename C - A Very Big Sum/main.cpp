#include <iostream>

int main() {
    int n;
    std::cin >> n;

    long long int sum = 0; 

    for (int i = 0; i < n; ++i) {
        long long int num;
        std::cin >> num;
        sum += num;
    }

    std::cout << sum << std::endl;

    return 0;
}