#include<iostream>
#include <algorithm>
using namespace std;
int function(int n,int arr[],int left,int right,int count = 0){
    if((arr[left]+arr[right])%2==0){
        return count;
    }
    return min(function(n,arr,left+1,right,count+1),function(n,arr,left,right-1,count+1));
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(auto& x: arr){
            cin>>x;
        }
        sort(arr,arr+n);
        cout<<function(n,arr,0,n-1,0)<<endl;
    }
}