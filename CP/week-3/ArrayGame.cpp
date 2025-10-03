#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> v(n);
        vector<long long> diff;

        for (int i = 0; i < n; i++) cin >> v[i];

        if (k >= 3) {
            cout << 0 << endl;
            continue;
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n - 1; i++) {
            long long x = v[i + 1] - v[i];
            diff.push_back(x);
        }

        sort(diff.begin(), diff.end());

        if (k == 1) {
            cout << min(v[0], *diff.begin()) << endl;  // fixed 'v[i]' to 'v[0]'
            continue;
        } else {
            unsigned long long ans = 1e9;  // fixed declaration

            for (int i = 0; i < diff.size(); i++) {

                auto right = lower_bound(v.begin(), v.end(), diff[i]);
                auto left = upper_bound(v.begin(), v.end(), diff[i]);

                

                //
                long long l = diff[i] - *(--left); 
                long long r = *right - diff[i];

                if (l > r) {
                    cout << min(r, v[0]) << endl;
                } else {
                    cout << min(l, v[0]) << endl;
                }
                break; // Only one output per test case
            }
        }
    }
    return 0;
}
