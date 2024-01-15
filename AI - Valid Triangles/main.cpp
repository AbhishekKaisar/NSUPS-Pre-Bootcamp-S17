#include <iostream>
#include <string>
using namespace std;
int main() {
    int t, a, b, c;
    cin >> t; // Read the number of test cases.

    // Store the results in a string
    string results;

    for(int i = 0; i < t; ++i) {
        std::cin >> a >> b >> c; // Read the two integers.
        int sum = a + b + c;
        if(sum == 180) {
            results += "YES";
        } else{
            results += "NO";
    }
        results += '\n'; // Start a new line after each result
    }
    // Print the results after completing all test cases
    cout << results;

    return 0;
    }
