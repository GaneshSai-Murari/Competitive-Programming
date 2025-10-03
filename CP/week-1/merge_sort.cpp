#include<iostream>
using namespace std;
void merge(int X[], int Y[], int left, int right) { 
    int mid = (left+right)/2, L = left, R = mid+1;   
    for(int i=left; i <= right; ++i) { 
        if(L <= mid && (R > right || X[L] <= X[R])) Y[i] = X[L++];    
        else Y[i] = X[R++];                                           
    }
}
void sort ( int in[], int out[],  int left, int right, int scratch[]) { 
    if (left==right){ 
        out[left] = in[left]; 
        return; 
    } 
    int mid = (left+right)/2; 
    sort(in,scratch,left,mid,out);     
    sort(in,scratch,mid+1,right,out); 
    merge(scratch,out,left,right); 
}