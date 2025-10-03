#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long int n, x, y;
        long long sum = 0;
        cin >> n >> x >> y;
        vector<long long int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        sort(v.begin(), v.end());

        long long min_s = sum - y;
        long long max_s = sum - x;

        long long count = 0;

        
        for (int i = 0; i < n; i++) {
            long long lo = min_s - v[i];
            long long hi = max_s - v[i];

           
            auto l = lower_bound(v.begin() + i + 1, v.end(), lo);
            auto r = upper_bound(v.begin() + i + 1, v.end(), hi);

            count += r - l;
        }

        cout << count << '\n';
    }

    return 0;
}
