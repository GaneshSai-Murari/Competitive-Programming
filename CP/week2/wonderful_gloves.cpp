#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v2.push_back(x);
        }

        unsigned long long result = 0;
        for(int i=0;i<n;i++){
            if(v1[i]>v2[i]){
                result += v1[i];
                v3.push_back(v2[i]);
            }else{
                result += v2[i];
                v3.push_back(v1[i]);
            }
        }

        

        sort(v3.begin(), v3.end(), greater<int>());

        for(int i=0;i<k-1;i++){
            
            result += v3[i];
        }

        cout<<result+1<<endl;

    }
}