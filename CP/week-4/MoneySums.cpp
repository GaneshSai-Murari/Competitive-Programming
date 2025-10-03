#include <bits/stdc++.h>
using namespace std;

void MoneySum(vector<int> &v, int n, set<int> &s) {
    if(n == 1){
        s.insert(v[0]);
        return;
    }
    MoneySum(v, n - 1, s);
    int x = v[v.size() - n];

    // Save current sums before adding new ones
    vector<int> temp;
    for (int sum : s) {
        temp.push_back(sum + x);
    }

    s.insert(x); 

    for (int newSum : temp) {
        s.insert(newSum);  // insert new sums
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &a : v) cin >> a;

    set<int> s;
    MoneySum(v, n, s);

    cout << s.size() << "\n";
    for (int x : s) cout << x << " ";
    cout << "\n";
}
