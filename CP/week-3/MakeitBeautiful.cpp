#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        int64_t k;
        cin >> n >> k;

        vector<int64_t> a(n);
        for (auto &val : a) cin >> val;

        vector<int> zero_bit_positions;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 60; j++) {
                if ((a[i] >> j) & 1) {
                    ans += 1;  
                } else {
                    zero_bit_positions.push_back(j);  
                }
            }
        }

        sort(zero_bit_positions.begin(), zero_bit_positions.end());

        for (int bit_pos : zero_bit_positions) {
            int64_t cost = int64_t(1) << bit_pos;
            if (k >= cost) {
                k -= cost;
                ans += 1;
            } else {
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
