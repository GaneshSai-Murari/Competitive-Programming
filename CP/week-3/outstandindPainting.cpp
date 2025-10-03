#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s(n, '0');  
        int max_val = 2 * n + 2;
        vector<int> num(max_val, 0);
        vector<vector<int>> v(n);

        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            v[i] = {l, r};
            if (l == r) {
                num[l]++;
            }
        }

       
        vector<int> pref(max_val, 0);
        for (int i = 1; i < max_val; i++) {
            pref[i] = pref[i - 1] + (num[i] >= 1 ? 1 : 0);
        }

       
        for (int i = 0; i < n; i++) {
            int l = v[i][0], r = v[i][1];
            if (l == r) {
                s[i] = (num[l] >= 2) ? '0' : '1';
            } else {
                
                int filled = pref[r] - pref[l - 1];
                int total = r - l + 1;
                s[i] = (filled < total) ? '1' : '0'; 
            }
        }

        cout << s << '\n';
    }
}
