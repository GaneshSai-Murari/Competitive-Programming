#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1); 
        vector<long long> prefix(n + 1); 

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            prefix[i] = prefix[i - 1] + v[i];
        }

        long long total_sum = prefix[n];

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;

            long long subarray_sum = prefix[r] - prefix[l - 1];
            long long new_sum = total_sum - subarray_sum + 1LL * k * (r - l + 1);

            if (new_sum % 2 == 1) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
