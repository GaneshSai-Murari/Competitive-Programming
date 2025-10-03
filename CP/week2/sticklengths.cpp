#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(auto& x:arr) cin>>x;
    sort(arr,arr+n);
    long long int median,sum=0;
    if(n%2)
    {
        median = arr[n/2];
    }else
    {
        median = (arr[n/2]+arr[(n/2)-1])/2;
    }

    for(auto x:arr){
        sum += abs(x-median);
    }

    cout<<sum;
}