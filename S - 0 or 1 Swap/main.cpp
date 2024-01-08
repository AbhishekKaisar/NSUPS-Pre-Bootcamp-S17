#include <iostream>
#include <vector>
#include <algorithm>

// Function to check if the permutation can be sorted by a single swap
bool canBeSortedByOneSwap(const std::vector<int>& permutation) {
    int n = permutation.size();
    std::vector<int> sorted_perm = permutation;
    std::sort(sorted_perm.begin(), sorted_perm.end());
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (permutation[i] != sorted_perm[i]) {
            ++count;
        }
    }
    // The array is either already sorted, or it can be sorted by 1 or 2 swaps
    // (two elements are out of place and swapping them will sort the array)
    return count <= 2;
}

int main() {
    // Read the size of the permutation and the permutation itself
    int N;
    std::cin >> N;
    std::vector<int> permutation(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> permutation[i];
    }
    
    // Check if we can sort the permutation by one swap and print the result
    if (canBeSortedByOneSwap(permutation)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}
