#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int epos1=0,opos1=0,epos2=0,opos2=0;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                if(i%2==0){
                    epos1++;
                }else opos1++;
            }
            if(s2[i]=='0'){
                if(i%2==0){
                    epos2++;
                }else opos2++;
            }
        }
        if(epos1<=opos2 &&  opos1<=epos2) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

}