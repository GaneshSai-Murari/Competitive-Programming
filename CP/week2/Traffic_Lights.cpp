#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    multiset<int> lights;
    multiset<int> gaps;  // multiset to handle duplicate gap sizes

    lights.insert(0);
    lights.insert(x);
    gaps.insert(x); 

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;

        lights.insert(p);
        
        auto it = lights.find(p);

        // Find neighbors
        int left = *prev(it);
        int right = *next(it);

        // Update gaps
        gaps.erase((right - left));  // remove old gap
        gaps.insert(p - left);
        gaps.insert(right - p);

        // Output largest gap
        cout << *gaps.rbegin() << " ";
    }

    cout << endl;
    return 0;
}
