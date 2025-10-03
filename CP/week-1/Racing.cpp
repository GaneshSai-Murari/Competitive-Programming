#include <iostream>
#include <vector>
using namespace std;
 
bool drone(vector<int>& arr, vector<int>& l, vector<int>& r, int h, int i, int x) {
    
    if (i == arr.size()-1) return true;
 
    
    if (x == 0) {
        if (h >= l[i] && h <= r[i]) {
            return drone(arr, l, r, h, i + 1, arr[i + 1]);
        }
        else return false;
    } else if (x == 1) {
        if ((h + 1) >= l[i] && (h + 1) <= r[i]) {
            return drone(arr, l, r, h + 1, i + 1, arr[i + 1]);
        }
        else return false;
    } 
    else {
        if(h==r[i]){
            arr[i] = 0;
            return drone(arr,l,r,h,i+1,arr[i+1]);
        }
        if((h+1)==l[i]){
            arr[i] = 1;
            return drone(arr,l,r,h+1,i+1,arr[i+1]);
        }
        if (drone(arr, l, r, h, i, 0)) {
            arr[i] = 0;
            return true;
        } else if (drone(arr, l, r, h, i, 1)) {
            arr[i] = 1;
            return true;
        }
        else return false;
    }
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1), l(n), r(n);
 
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) cin >> l[i] >> r[i];
 
        
        arr[n] = 0;
 
        if (drone(arr, l, r, 0, 0, arr[0])) {
            for (int i = 0; i < n; i++) {
                cout << arr[i]<<" ";
            }
        } else {
            cout << "-1";
        }
        cout << endl;
    }
}