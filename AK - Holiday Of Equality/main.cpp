#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int welfare[n];
    
    for(int i = 0; i < n; i++) {
        cin >> welfare[i];
    }
    
    int max = welfare[0];
    for(int i = 0; i < n; i++) {
        if(welfare[i] > max) {
            max = welfare[i];
        }
    }
    
    long long total = 0; // Use long long to avoid integer overflow
    for(int i = 0; i < n; i++) {
        total += max - welfare[i]; // Add the difference to the total
    }
    
    cout << total << endl; // Print the total money to be spent
    
    return 0;
}
