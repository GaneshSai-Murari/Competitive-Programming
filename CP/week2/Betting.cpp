#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);  
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool win = false;

        unordered_map<int, int> repeat;
        vector<int> v;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (!repeat[x]) {
                v.push_back(x); 
            }
            repeat[x]++;
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++) {
            int day = v[i];

            
            if (repeat[day] >= 4 || (repeat[day] >= 2 && repeat[day + 1] >= 2)) {
                win = true;
                cout << "YES\n";
                break;
            }

            if(repeat[day] >= 2){
                repeat[day+1] = 2;
            }
        }

        if (!win) {
            cout << "NO\n";
        }
    }

    return 0;
}
