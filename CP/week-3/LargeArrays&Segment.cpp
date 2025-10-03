#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,x,sum=0;
        cin>>n>>k>>x;

        vector<long long int> v(n);
        vector<long long int> vsum(n);
        
        for(long long i=0;i<n;i++){
            cin>>v[i];
            sum += v[i];
            vsum[i] = sum;
        }

        auto it = lower_bound(vsum.begin(),vsum.end(),sum-x%sum+1);
        
        
        long long int right = (it - vsum.begin()) + (k-1-x/sum)*n;
        long long int left = 0,ans;
        if(sum*k < x){
            ans = 0;
        }else{
            ans = right+1;
        }

        cout<<ans<<endl;


    }
}