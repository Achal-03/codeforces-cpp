#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int value;
        cin >> value;

        if (value == 0) {
            cout << 0 << endl;
            continue;
        }

        int min_digit = 9;

        while (value > 0) {
            int last_digit = value % 10;
            min_digit = min(min_digit, last_digit);
            value = value / 10;
        }

        cout << min_digit << endl;
    }

    return 0;
}
