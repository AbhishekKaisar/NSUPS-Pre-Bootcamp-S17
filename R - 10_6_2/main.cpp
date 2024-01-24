#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159265358979323846

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        double l;
        cin >> l;

        double r = l / 5;
        double w = (l * 6) / 10;

        double areac = PI * r * r;
        double arearec = (l * w) - areac;

        cout << fixed << setprecision(2) << areac << " " << arearec << "\n";
    }

    return 0;
}
