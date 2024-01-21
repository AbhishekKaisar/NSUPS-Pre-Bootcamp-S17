#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0) return 1;
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int T, N;
    cin >> T; // Reading the number of test cases

    for (int i = 0; i < T; i++) {
        cin >> N; // Reading the number
        cout << factorial(N) << endl; // Displaying factorial of the number
    }
    
    return 0;
}
