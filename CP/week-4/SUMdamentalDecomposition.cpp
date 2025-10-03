#include <bits/stdc++.h>
using namespace std;

int countOnes(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1); 
        count++;
    }
    return count;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x = countOnes(k);
        if( n==1 && k==0 ){
            cout<<-1<<endl;
            continue;
        }

        int sum = k;
        int left = n-x;
        if(left<=0){
            cout<<sum<<endl;
            continue;
        }
        if(left%2==0){
            sum += left;
        }else{
            int p1 = x;
            if(k%2==1) p1--;
            if(p1==0){
                sum += (left+3);
            }else{
                sum += (left+1);
            }
        }

        cout<<sum<<endl;
    }
}