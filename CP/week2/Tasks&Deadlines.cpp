#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v;
    
    for (int i = 0; i < n; i++) {
        int a, d;
        cin >> a >> d;
        v.push_back({a, d});
    }

    
    sort(v.begin(), v.end());

    long long day = 0, reward = 0;
    for (int i = 0; i < n; i++) {
        day += v[i][0];  
        reward += (v[i][1] - day);  
    }

    cout << reward << "\n";
}
