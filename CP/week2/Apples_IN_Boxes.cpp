#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int game(vector<int> arr,int k){

    int n = arr.size();
    int turn = 0;
    


    
    
}
    
 

 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin>>n>>k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            
        }
        sort(arr.begin(),arr.end());
 
        if(game(arr,k,n)){
            cout<<"Jerry";
        }else{
            cout<<"Tom";
        }
        cout<<endl;
 
    }
}