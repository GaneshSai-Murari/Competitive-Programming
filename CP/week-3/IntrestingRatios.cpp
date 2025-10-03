#include <bits/stdc++.h>
using namespace std;

int main(){

int N = 1e7;
vector<bool> isPrime(N + 1, true);
isPrime[0] = isPrime[1] = false;
for (int i = 2; i * i <= N; i++) {
    if (isPrime[i]) {
        for (int j = i * i; j <= N; j += i) {
            isPrime[j] = false;
        }
    }
}

    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int left = 1,right = n,count = 0;
        while(left<right){
           
            if(right%left == 0){
                if(isPrime[right/left]){
                    count++;
                }
            }

            right -= left;
            

            if(left*2>right){
                left++;
                right = (n/left)*left;
                continue;
            }
        }
        cout<<count<<endl;
    }
}