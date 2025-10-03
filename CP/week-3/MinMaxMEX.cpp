#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        vector<int> index;
        int z_count = 0;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            if(x==0){
                z_count++;
                index.push_back(i);
            }
        }

        if(z_count<k){
            cout<<"0"<<endl;
            continue;
        }


    }
}