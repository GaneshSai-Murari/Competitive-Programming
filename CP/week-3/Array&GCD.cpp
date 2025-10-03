#include <bits/stdc++.h>
using namespace std;

const int64_t a = 1e7; 
const int N = 4e5;

vector<int64_t> getPrimes(int64_t n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int64_t i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int64_t j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    vector<int64_t> primes_sum;
    int64_t sum = 0;
    for (int64_t i = 2; i <= n; i++) {
        if (isPrime[i]) {
            sum += i;
            primes_sum.push_back(sum);
        }
    }

    return primes_sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int64_t> primes_sum = getPrimes(a);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int64_t> v(n);
        int64_t s = 0, result = -1;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int64_t>());

        for (int i = 0; i < n; i++) {
            s += v[i];
            if (i < primes_sum.size() && s >= primes_sum[i]) {
                result = i;
            }
        }

        cout << (n - 1 - result) << '\n';
    }

    return 0;
}
