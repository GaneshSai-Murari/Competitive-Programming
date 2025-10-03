#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0,found1=0,found2=0;
        cin>>n;
        vector<char> v;
        v.push_back('0');
        for(int i=1;i<=n;i++){
            char x;
            cin>>x;
            v.push_back(x);
            if(x!=v[i-1]){
                count++;
                if(x=='0' && v[i-1]=='1'){
                    found1++;
                }
                if(x=='1' && v[i-1]=='0'){
                    found2++;
                }
            }
        }
        if(found2>=2 || found1>=2){
            cout<<n+count-2;
        }
        else if(found1==1 && found2==1){
            cout<<n+count-1;
        }else{
            cout<<n+count;
        }
        cout<<endl;
    }
}