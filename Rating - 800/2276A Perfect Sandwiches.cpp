#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n<=m){
            cout << -1 << endl;
        }
        else{
            cout << min(m, n-m) << endl;
        }
    }
    return 0;
}
