#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int m=0;
        int d = abs(b-a);
        if(a>b){
            if(a%2==0 || d>1) {
                cout<<-1<<endl;
                continue;
            }
            else{
                cout<<y<<endl;
                continue;
            }
        }
        if(x<y){
            m = d*x;
        }else{
            if(d%2 == 0){
                m=d*(x+y)/2;
            }else{
                int p = d/2;
                if(a&1){
                    
                    m = p*y + (p+1)*x;
                }else{
                    m = p*x + (p+1)*y;
                }
            }
        }

        cout<<m<<endl;
    }
}