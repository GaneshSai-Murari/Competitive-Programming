#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);

        vector<int> forward(m);
        vector<int> backward(m);

        int j = 0;

        for(int i=0;i<m;i++){
            while( a[j]<b[i] && j<n ) j++;
            forward[i] = j++;
        }

        j = n-1 ;

        for(int i=m;i<m;i--){
            while( a[j]<b[i] && j>=0 ) j--;
            backward[i] = j--;
        }

        if(forward[m-1]<n){
            cout<<0<<endl;
            continue;
        }

        






       


        
    }
    

}
