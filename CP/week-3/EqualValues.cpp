#include <bits/stdc++.h>
using namespace std;

long long N = 1e6;

int main(){
    int t;
    cin>>t;
   
    while(t--){
        long long n,ans=N;
        cin>>n;
        vector<int> v(n);

        for(auto)
        
        for(int i=0;i<n;i++){

            

            int j=i;

            while( j<n-1 && v[i] == v[j+1] ){

                j++;
                cout<<"hi";


            }

			ans=min(ans,(i+n-j-1)*v[i]);
            cout<<i<<" "<<j<<endl;
			i=j;

        }

        

        
        cout<<ans<<endl;
    }
}