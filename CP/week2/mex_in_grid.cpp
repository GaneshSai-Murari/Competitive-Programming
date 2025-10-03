#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> build_grid(int n) {
    vector<vector<int>> v(n, vector<int>(n));
    
    if (n == 1) {
        v[0][0] = 0;
        return v;
    }
    if (n == 2) {
        v[0] = {0, 1};
        v[1] = {2, 3};
        return v;
    }

    int x = (n*n)-1;
    int i = 0 ; j = 0
    while(x>=0){
        v[]

    }
    return v;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> v = build_grid(n);
        for (auto& row : v) {
            for (auto x : row) {
                cout << x << " ";
            }
            cout<<endl;
            
        }
        cout<<endl;
    }
    return 0;
}
