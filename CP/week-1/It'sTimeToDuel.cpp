#include <iostream>
#include <vector>
using namespace std;
bool possible(int arr[],int n,bool result1,bool result2, int i = 0){

    if((result1 || result2) != arr[i]){
        return false;
    }
    if(i==(n-2)){
        return (result2 != arr[i+1]);
    }
    return (possible(arr,n,!result2,true,i+1) || possible(arr,n,!result2,false,i+1));
}

int main() {
    int t; 
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        if(possible(arr,n,arr[0],arr[0])) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
    }
    return 0;
}
