#include<iostream>
#include <cmath>
using namespace std;

void greycode(int n,int out[]){

    if(n==1){
        out[0] = 0;
        out[1] = 1;
        return;
    }

    int k = pow(2,n-1);
    int newout[k];
    greycode(n-1,newout);
    int last = 0;

    for(int i=0;i<k;i++){
        last = last%2 ;
        out[2*i] = 2*newout[i]+ last;
        last++;
        last = last%2 ;
        out[2*i+1] = 2*newout[i]+ last;
    }

}

void printBinary(int n, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int x = pow(2,n);
   
    int out[x]={};
    greycode(n,out);
    for(int i : out){
        
        printBinary(i,n);


    }
    
}