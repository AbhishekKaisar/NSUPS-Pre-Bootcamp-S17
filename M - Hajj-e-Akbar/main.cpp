#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int caseNumber = 1;

    while (true) {
        cin >> s;

        if (s == "*") {
            break;
        }

        cout << "Case " << caseNumber << ": ";
        if (s == "Hajj") {
            cout << "Hajj-e-Akbar" << endl;
        } else {
            cout << "Hajj-e-Asghar" << endl;
        }
        caseNumber++;
    }

    return 0;
}
