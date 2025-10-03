#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> m;
        vector<unordered_set<int>> part(n);
 

        for(auto& a:v){
            cin>>a;
            m[a]++;
        }


        int ans = 0;

        part[ans].insert(v[0]);
        ans++;
        m[v[0]]--;
        if(m[v[0]]==0){
            cout<<ans<<endl;
            continue;
        }
        

        for(int i=1;i<n;i++){

            m[v[i]]--;

            if(m[v[i]]==0){
                break;
            }

            part[ans].insert(v[i]);
            part[ans-1].erase(v[i]);

            if(part[ans-1].size()==0){
                ans++;
            }

        }

        cout<<ans+1<<endl;
        
    }
}