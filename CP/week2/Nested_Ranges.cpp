#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,upperbound=0,p=0;
    cin>>n;
    vector<vector<int>> range;
    vector<int> contained(n+1,0);
    vector<int> contains(n+1,0);
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        int r = x-y;
        range.push_back({x,r,y,i});
    }
    sort(range.begin(),range.end());
    for(auto a: range){
       
        if(a[2]<=upperbound){
            contained[p]=1;
            contains[a[3]]=1;
        }

        if(a[2]>=upperbound){
            p=a[3];
            upperbound = a[2];
        } 
    }
    for(int i=1;i<=n;i++){
        cout<<contained[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<contains[i]<<" ";
    }

}