#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m, L;
        cin >> n >> m >> L;

        vector<vector<int>> h(n);
        vector<int> diff(n);
        vector<int> sum(n + 1, 0);
        
        vector<multiset<int>> power_sets(n + 1); 
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            h[i] = {x, y};
            diff[i] = y - x + 2;
        }


        int a = 0;

        for (int i = 0; i < m; i++) {
            int x, p;
            cin >> x >> p;
            

            if (a<n && x > h[a][0]){
                a++;
                sum[a] = sum[a-1];
            } 
                
           
            power_sets[a].insert(p);
            sum[a] += p;
            
        }

        bool conflict = false;
        sum[0]++; 
        

        
        for (int i = 0; i < n; i++) {

           
            if (sum[i] < diff[i]) {
                cout << -1 << endl;
                conflict = true;
                break;
            }

            for (auto it = power_sets[i].begin(); it != power_sets[i].end(); ++it) {
                int x = *it;
               

                if (sum[i] - x >= diff[i]) {
                    
                    power_sets[i + 1].insert(x);
                    sum[i] -= x;
                    continue;
                    
                   
                }

                

                break;
            }
        }

        



        if (!conflict) {
            cout << m - power_sets[n].size() << endl; 
        }
    }
}
