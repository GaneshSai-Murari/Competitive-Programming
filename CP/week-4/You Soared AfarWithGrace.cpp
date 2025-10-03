#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(auto & x: a) cin>>x;
        for(auto & y: b) cin>>y;

        int count = 0;
        bool possible = true
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                count++;
            }
            if(n & 1){
                if(count>1){
                    cout<<-1<<endl;
                    possible = false;
                    break;
                }
            }else{
                if(count>0){
                    cout<<-1<<endl;
                    possible = false;
                    break;
                }
            }
        }

        if(!possible) continue;

    }
}