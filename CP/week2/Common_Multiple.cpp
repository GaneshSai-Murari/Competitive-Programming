#include <bits/stdc++.h>
using namespace std;
int main(){
    int N = 101;
    int t ;
    cin>>t;
    while(t--){
        int n,count =0;
        cin>>n;
        vector<bool> isthere(N,false);
        while(n--){
            int x;
            cin>>x;
            if(!isthere[x]){
                isthere[x] = true;
                count++;
            }
        }
        cout<<count<<endl;
    }
}