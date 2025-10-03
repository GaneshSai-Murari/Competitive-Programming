#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        long long int n,k,m=0,sum=0,ans;
        cin>>n>>k;
        vector<long long int> v;
        for(int i=-0;i<n;i++){
            long long int x;
            cin>>x;
            v.push_back(x);
            m = max(m,x);
            sum += x;
        }

        sort(v.begin(),v.end());

        ans = max(m,(sum+k-1)/k)

        cout<<ans<<endl;

    }
}