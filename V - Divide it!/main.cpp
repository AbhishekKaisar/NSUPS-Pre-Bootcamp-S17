#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        long long n;  // Use long long to handle large values of n
        cin >> n;

        int moves = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else if (n % 3 == 0) {
                n = 2 * n / 3;
            } else if (n % 5 == 0) {
                n = 4 * n / 5;
            } else {
                // If none of the operations are possible, it's impossible to reach 1
                moves = -1;
                break;
            }
            moves++;
        }

        cout << moves << endl;  // Print the minimum number of moves or -1
    }

    return 0;
}
