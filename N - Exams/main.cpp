#include <iostream>
#include <string>
using namespace std;

int main() {
    int t, x, y, z;
    cin >> t; // Read the number of test cases.

    string results = ""; // Initialize an empty string to store the results

    for(int i = 0; i < t; ++i) {
        cin >> x >> y >> z; // Read the three integers.
        // Calculate the percentage and ensure the division is done in double
        double percentage = (z * 100.0) / (x * y);
        if(percentage > 50) {
            results += "YES\n"; // Append "YES" and a newline to the results string
        } else {
            results += "NO\n"; // Append "NO" and a newline to the results string
        }
    }

    cout << results; // Print all the results after processing all test cases

    return 0;
}
