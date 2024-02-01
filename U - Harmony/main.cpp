#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    int flag = 0;
    cin >> a >> b;

    for (int k = min(a, b); k <= max(a, b); k++) {
        if (abs(a - k) == abs(b - k)) {
            cout << k << endl;
            flag = 1;
            break;  // exit the loop when a solution is found
        }
    }

    if (flag == 0) {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
