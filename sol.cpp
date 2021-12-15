#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
	int n;
	cin >> n;
	// a[i]%a[i-1] != 0
	// simply start the sequence of length at 2
	for(int i=0, x=2; i<n; ++i, ++x)
		cout << x << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int tc=1;
	cin >> tc;
	for(int t=0; t<tc; ++t)
		solve();
}
