#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 
using namespace std;

int binary_search(int n, int left, int right, const vector<int>& v) {
    if (left > right) return -1;  
    int mid = left + (right - left) / 2;
    if (v[mid] == n) {
        return mid;
    } else if (n > v[mid]) {
        return binary_search(n, mid + 1, right, v);
    } else {
        return binary_search(n, left, mid - 1, v);
    }
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> v; 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(abs(x));  
        }

        int f = v[0]; 
        sort(v.begin(), v.end());

        int x = binary_search(f, 0, n - 1, v);
        int m = (n+1)/2-1;


        if(x>m){
            if((n-1-x)<m){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
        
        
       
        
    }
}
