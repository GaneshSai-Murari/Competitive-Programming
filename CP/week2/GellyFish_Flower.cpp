#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

__int64 cal(int x, int y) {
    return (__int128(1) << x) + (__int128(1) << y);
}



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i_1 = 0, i_2 = 0, max1 = 0, max2 = 0;
        cin >> n;
        vector<int> v1(n), v2(n);

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
            if (v1[i] == n - 1) i_1 = i;
        }

        for (int i = 0; i < n; i++) {
            cin >> v2[i];
            if (v2[i] == n - 1) i_2 = i;
        }

        for (int i = 0; i < n; i++) {
            if (v1[i] > max1) {
                max1 = v1[i];
                i_1 = i;
            }
            if (v2[i] > max2) {
                max2 = v2[i];
                i_2 = i;
            }

            __int128 z;
            if (i == 0) {
                z = cal(v1[i], v2[i]);
            } else {
                int val1 =  v2[i - i_1];
                int val2 =  v1[i - i_2];
                z = max(cal(max1, val1), cal(val2, max2));
            }

            z %= MOD;

            unsigned long long x = z;
            cout<<x<<" ";
        }

        cout << endl;
    }
}
