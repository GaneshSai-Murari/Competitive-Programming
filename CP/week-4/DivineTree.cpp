#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int r = m-n+1;
        if(r>n || r<1) {
            cout<<-1<<endl;
            continue;
        }
        cout<<r<<endl;
        int s = 1;
        
        vector<int> v(n);
        v[0] = r;
        for(int i=1;i<n;i++){
            if(s==r) s++;
            v[i] = s++;
        }
        for(int i=0;i<n-1;i++){
            cout<<v[i]<<" "<<v[i+1]<<endl;
        }
    }
}