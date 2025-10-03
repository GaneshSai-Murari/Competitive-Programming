#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, cnt_odd = 0;
        cin >> n;
        for (int i = 1, u, v, w; i <= n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
            ans += a[i];
            cnt += a[i] & 1;
        }
        if (cnt == 0 || cnt == n) {
            cout << mx << '\n';
        } else {
            cout << ans - cnt + 1 << '\n';
        }
    }
    
    return 0;
}
