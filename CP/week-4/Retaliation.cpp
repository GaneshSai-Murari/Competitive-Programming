#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> v(n);
        for(auto& a:v) cin>>a;
        

        if(n>2){
            if(v[1]-v[0] != v[2]-v[1]){
                cout<<"NO"<<endl;
                continue;
            }
        }

        long long int diff = v[1]-v[0];
        bool b = false;

        for(int i=2;i<n;i++){
            if(v[i]-v[i-1] != diff){
                cout<<"NO"<<endl;
                b = true;
                break;
            }
        }

        if(b) continue;

        long long int l = v[0];
        long long int r = v[n-1];
        long long int x = n*n -1;

        if(n*l < r || n*r < l ){
                cout<<"NO"<<endl;
                continue;
        }

            if((n*l-r)%x !=0 || (n*r-l)%x !=0){
                cout<<"NO"<<endl;
                continue;
            }

            cout<<"YES"<<endl;
    }
}
