#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(vector<int>& arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
        if (result == 1)
            break;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n == 2) {
            if (arr[0] == arr[1]) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
                cout << "1 2" << endl;
            }
            continue;
        }

        bool found = false;
        for (int i = 0; i < n; i++) {
            swap(arr[i], arr[0]);
            
            if (arr[0] != findGCD(arr)) {
                cout << "YES" << endl;
                for (int x = 0; x < n; x++) {
                    cout << (x == i ? "2" : "1") << " ";
                }
                cout << endl;
                found = true;
                swap(arr[i], arr[0]); 
                break;
            }
            swap(arr[i], arr[0]);
        }

        if (!found) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
