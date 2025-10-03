#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> v(n);
        vector<long long> vsum(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        
        for (int i = 0; i < n; i++) {
            vsum[i + 1] = vsum[i] + v[i];
        }

        int index = 0;

        while (index <= n && vsum[index] + v[index] * (n - index) < k) {
            index++;
            if (index == n) break;  
        }

        cout << k + index << '\n';
    }

    return 0;
}
