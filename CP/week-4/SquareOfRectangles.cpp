#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        bool result = false;
        if(l2==l3){
            if(l1==l2 && (l1)==(b1+b2+b3)){
                result = true;
                cout<<"YES"<<endl;
                continue;
            }
            if(b2+b3==b1 && b1==l1+l2){
                result = true;
                cout<<"YES"<<endl;
                continue;
            }
        }
        if(b2==b3){
            if(b1==b2 && (b1)==(l1+l2+l3)){
                result = true;
                cout<<"YES"<<endl;
                continue;
            }
            if(l2+l3==l1 && l1==b1+b2){
                result = true;
                cout<<"YES"<<endl;
                continue;
            }
        }

        if(!result) cout<<"NO"<<endl;
    }
}