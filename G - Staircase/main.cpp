#include <iostream>

void staircase(int n) {
    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i; ++j) {
            std::cout << " ";
        }

        // Print #
        for (int k = 0; k < i; ++k) {
            std::cout << "#";
        }

        // Move to the next line
        std::cout << std::endl;
    }
}

int main() {
    int n;

    // Input the size of the staircase

    std::cin >> n;

    // Validate the input constraints
    if (n >= 1 && n <= 100) {
        // Call the staircase function
        staircase(n);
    }

    return 0;
}
