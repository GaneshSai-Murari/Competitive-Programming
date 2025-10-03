#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;  
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; 
}

bool isPossible(vector<int> v,int n,int k){

    vector<int> grp1,grp2,grp3;
    int l = n/3;
    int r = n-2*l;

    for(int i=0;i<n;i++){
        if(i<l){
            grp1.push_back(v[i]);
        }else if(i<2*l){
            grp2.push_back(v[i]);
        }
        else{
            grp3.push_back(v[i]);
        }
    }

    sort(grp1.begin(),grp1.end());
    sort(grp2.begin(),grp2.end());
    sort(grp3.begin(),grp3.end());

    int m1,m2,m3;

    m1=grp1[(l-1)/2];
    m2=grp2[(l-1)/2];
    m3=grp3[(r-1)/2];

    if((m1<=k && m2<=k)||(m1<=k && m3<=k)||(m3<=k && m2<=k)) return true;

    if(m1>k && m2>k && m3> k ) return false;

    if(m1>k && m2>k && m3<=k) {
        
    }



}