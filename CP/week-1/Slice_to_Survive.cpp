#include<iostream>
#include <cmath>
using namespace std;
int cuts(int n,int m,int p,int q,int i=0){
 
    if(n==1 && m==1){
        return 0;
    }

    
    else if (n > m){
        int x = min(p,n-p+1);
        return 1+(int)log2(x) + (int)log2(m);
    }
    else{
        int y = min(q,m-q+1);
        return 1+(int)log2(n) + (int)log2(y);
    }
 
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        cout<<cuts(n,m,a,b)<<endl;
 
 
    }
}