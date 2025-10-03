#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,p;
        cin>>n>>p;
        string s;
        cin>>s;
        int zc=0,oc=0;
        for(auto x: s){
            if(x=='0') zc++;
        }
        oc = n-zc;
        if(oc==n || zc==0){
            if(n==2*p) {cout<<"NO"<<endl;
                continue;
            }
        }
        if((zc-oc+2*p)%4==0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    
    

    }


}