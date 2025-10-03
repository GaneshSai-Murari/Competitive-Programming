#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum;
        cin>>n;
        if(n%2==0){
            sum = (n/2)*(n/2)+1;
        }
        else{
            sum = (n/2)*(n/2+1)+1;
        }
        cout<<sum<<endl;
    }
}