#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b){
    if(a%b==0) return b;
    else return gcd(b,a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool result = false;
        vector<long long int> v(n);
        for(auto& a:v) cin>>a;
        sort(v.begin(),v.end());
        long long int m = v[0];
        vector<long long int> v2;
        for(int i=1;i<n;i++){
            long long int x = v[i];
            if(x%m==0) v2.push_back(x);
        }

        if(v2.size()) {

            long long int a = v2[0];
            for(int i=0;i<v2.size();i++){

                a = gcd(v2[i],a);
                if(a==m) {
                    cout<<"YES"<<endl;
                    result = true;
                    break;
                }
            }

        }
        

        if(!result) cout<<"NO"<<endl;

    }
}