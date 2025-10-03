#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;

void solve(){
	ll W, H, A, B;
	cin >> W >> H >> A >> B;
	ll X1, Y1, X2, Y2;
	cin >> X1 >> Y1 >> X2 >> Y2;
	bool ok = false;
	if(X1 != X2 && (X1 - X2) % A == 0) ok = true;
	if(Y1 != Y2 && (Y1 - Y2) % B == 0) ok = true;
	if((X1 - X2) % A == 0 && (Y1 - Y2) % B == 0) ok = true;
	cout << (ok ? "Yes" : "No") << '\n';
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--) solve();
}
