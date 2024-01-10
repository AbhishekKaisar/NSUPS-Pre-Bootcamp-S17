
#include <iostream>

// Function to calculate the absolute value of an integer
int absolute(int value) {
    return (value < 0) ? -value : value;
}

int diagonalDifference(int arr[][100], int n) {
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    
    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][n - 1 - i];
    }
    
    return absolute(primaryDiagonalSum - secondaryDiagonalSum);
}

int main() {
    int n;
    std::cin >> n;
    int arr[100][100]; // Assuming the maximum size of the matrix is 100x100
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }
    
    std::cout << diagonalDifference(arr, n) << std::endl;
    return 0;
}
