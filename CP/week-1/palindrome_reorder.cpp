#include<iostream>
#include <string>
#include <vector>
using namespace std;
void palindrome(int n,string s){
 
}
int main(){
    string s;
    
    cin>>s;
    int n = s.length();
    char newstring[n];
    int arr[26] = {};
    for(auto& x: s){
        arr[x-'A']++;
    }
    bool count = (n%2==0);
    for(int i=0;i<=n/2;i++){
        int j=i;
        for(;j<n-1;j++){
            if(arr[s[j]-'A']) break;
        }
 
        if((arr[s[j]-'A']%2)==1 && count){
            cout<<"NO SOLUTION";
            
            return 0;
        }
        if(arr[s[j]-'A']%2==1){
            count = true;
            newstring[n/2] = s[j];
            arr[s[j]-'A'] -= 1;
            
            
        }
        for(;j<n-1;j++){
            if(arr[s[j]-'A'] && (arr[s[j]-'A']%2)==0 ) break;
        }
        if(i==(n/2) and n%2==1) break;
        newstring[n-1-i] = s[j];
        newstring[i] = s[j];
        arr[s[j]-'A'] -= 2;
 
        }
    for(auto x: newstring) cout<<x;
 
    }