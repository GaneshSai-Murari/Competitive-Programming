#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,p,q;
        cin>>n>>m>>p>>q;
        if(n%p==0){
            if(q*(n/p)==m){
                cout<<"YES";
            }
            else cout<<"NO";
        }
        else cout<<"YES";

        cout<<endl;
    }
}