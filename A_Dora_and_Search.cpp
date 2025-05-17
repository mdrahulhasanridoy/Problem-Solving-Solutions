#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool f = false;
        for (int i = 0; i < n; i++){
            for (int j = i + 2; j < n; j++){
                int mn = a[i], mx = a[i];
                for (int k = i; k <= j; k++){
                    mn = min(mn, a[k]);
                    mx = max(mx, a[k]);
                }
                if (a[i] != mn && a[i] != mx && a[j] != mn && a[j] != mx){
                    cout << i + 1 << " " << j + 1 << '\n';
                    f = true;
                    break;
                }
            }
            if (f)
                break;
        }
        if (!f){
            cout << -1 << '\n';
        }
    }
}