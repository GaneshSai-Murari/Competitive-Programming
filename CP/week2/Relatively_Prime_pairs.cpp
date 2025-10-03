#include <iostream>
using namespace std;

int main() {
    int64_t l, r;
    cin >> l >> r;

    cout << "YES" << endl;

    for (int64_t i = l; i <= r; i += 2) {
        cout << i << " " << i + 1 << endl;
    }

    return 0;
}
