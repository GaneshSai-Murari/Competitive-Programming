#include <iostream>
#include <list>
#include<vector>

using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    list<int> circle;
    for (int i = 1; i <= n; ++i)
        circle.push_back(i);

    auto it = circle.begin();
    vector<int> result;

    while (!circle.empty()) {
       
        for (long long i = 0; i < k; ++i) {
            ++it;
            if (it == circle.end()) it = circle.begin();
        }
        int num = *it;
        cout<<num<<" ";
        it = circle.erase(it);
        if (it == circle.end()) it = circle.begin();
    }

    
    

    return 0;
}
