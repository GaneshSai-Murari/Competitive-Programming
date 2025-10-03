#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 1e9;
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(auto& x : arr){
        cin>>x;
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        int x = b-a+1;
        unordered_set<int> s(arr+a-1,arr+b);
        cout<<s.size()<<endl;

    }
}