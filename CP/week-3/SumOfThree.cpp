#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,t;
    cin>>n>>t;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,i+1});
    }

    sort(v.begin(),v.end());

    for(int i=0;i<=n-3;i++){
        int left = i+1;
        int right = n-1;
        int target = t-v[i][0];
        while(left<right){
            if(v[left][0]+v[right][0]==(t-v[i][0])){
                cout<<v[i][1]<<" "<<v[left][1]<<" "<<v[right][1];
                return 0;
            }
            if(v[left][0]+v[right][0]>(t-v[i][0])){
                right--;
            }else{
                left++;
            }
        }
    }

    cout<<"IMPOSSIBLE";
}