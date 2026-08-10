#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int test=0; test<t; test++){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int sum = accumulate(arr, arr+n, 0);
        if(sum%3==0){
            cout << 0 << '\n';
        }
        else if(sum%3==2){
            cout << 1 << '\n';
        }
        else if(sum%3 == 1){
            bool found = false;
            for(int i=0; i<n; i++){
                if(arr[i]%3 == 1){
                    found = true;
                }
            }
            if(found){
                cout << 1 << '\n';
            }
            else{
                cout << 2 << '\n';
            }
        }
    }
    return 0;
}
