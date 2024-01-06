#include <iostream>

using namespace std;

int birthdayCakeCandles(int candles[], int n) {
    int maxHeight = 0;
    int countTallest = 0;

    // Find the maximum height of candles
    for (int i = 0; i < n; ++i) {
        if (candles[i] > maxHeight) {
            maxHeight = candles[i];
            countTallest = 1;
        } else if (candles[i] == maxHeight) {
            // If the candle has the same height as the tallest one
            // Increment the count of tallest candles
            countTallest++;
        }
    }

    return countTallest;
}

int main() {
    // Input the size of the array
    int n;
    cin >> n;

    // Input the candle heights
    int candles[n];
    for (int i = 0; i < n; ++i) {
        cin >> candles[i];
    }

    // Call the function and output the result
    int result = birthdayCakeCandles(candles, n);
    cout << result << endl;

    return 0;
}
