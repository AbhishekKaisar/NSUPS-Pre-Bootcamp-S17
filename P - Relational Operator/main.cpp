#include <iostream>
#include <string>

int main() {
    int t, a, b;
    std::cin >> t; // Read the number of test cases.

    // Store the results in a string
    std::string results;

    for(int i = 0; i < t; ++i) {
        std::cin >> a >> b; // Read the two integers.
        if(a > b) {
            results += '>';
        } else if(a < b) {
            results += '<';
        } else {
            results += '=';
        }

        results += '\n'; // Start a new line after each result
    }

    // Print the results after completing all test cases
    std::cout << results;

    return 0;
}
