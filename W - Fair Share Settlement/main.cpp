#include <iostream>

using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;

    while (T--) {
        int N, K;  // Total bill amount and number of friends
        cin >> N >> K;

        int fairShare = N / (K + 1);  // Calculate fair share per person (including you)
        int roundedShare = fairShare - (fairShare % 1);  // Round down to nearest integer
        int amountPaidByFriends = roundedShare * K;  // Total amount paid by friends
        int netAmountPaid = N - amountPaidByFriends;  // Your net payment

        cout << netAmountPaid << endl;  // Output the result
    }

    return 0;
}
