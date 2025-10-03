#include<iostream>
#include <string>
using namespace std;

bool possible(string s){
    int n = s.length();
    int l=0,r=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='(') l++;
        else if(s[i]==')') r++;
        
        if(l==r) return true;
    }

    return false;


}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        if(possible(s)){
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;

    }
}