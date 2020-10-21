#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	ll ans = 1;
	if (n == 2) {
		cout << "1" << endl;
		return;
	}
	for (int i = 1; i < n; i++) {
		ans *= i;
	}
	cout << ans / (n / 2) << endl;
}


int32_t main() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();
	return 0;
}
