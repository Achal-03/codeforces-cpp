#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test=0; test<t; test++){
        int n, a, b;
        cin >> n >> a >> b;

        if ((n - b) % 2 == 0 && (a <= b || (n - a) % 2 == 0))
            cout << "YES\n";
        else
            cout << "NO\n";

            
    }
    return 0;
}
