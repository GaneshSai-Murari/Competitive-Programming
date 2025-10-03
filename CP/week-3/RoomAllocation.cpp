#include <bits/stdc++.h>
using namespace std;

struct stack{

    int d = 0;
    int status = 

    bool add(int x){
        if(x>d){
            d = x;
            return true;
        }else{
            return false;
        }
    }


}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> rooms;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        rooms.push_back({x,y,i+1});
    }

    sort(rooms.begin(),rooms.end());






}