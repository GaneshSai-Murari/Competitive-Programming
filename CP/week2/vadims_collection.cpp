#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int m = s.size();

        vector<int> v(10, 0);
        set<char> num;

        
        for (char x : s) {
            if (!v[x - '0']) {
                num.insert(x);
            }
            v[x - '0']++;
        }

        char arr[10];

        for (int i = 0; i < m; i++) {
            char curr_digit = '9' - i;
            int d = curr_digit - '0';

            if (v[d]) {
                arr[i] = curr_digit;
                v[d]--;
                if (!v[d]) num.erase(curr_digit);
            } else {
                auto it = num.upper_bound(curr_digit);
                if (it != num.end()) {
                    char c = *it;
                    arr[i] = c;
                    v[c - '0']--;
                    if (!v[c - '0']) num.erase(c);
                }
            }
        }

        for (int i = 0; i < m; i++) cout << arr[i];
        cout << endl;
    }
}
