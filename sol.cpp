#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		if (k == 0) {
			// if 'k' = 0, then print the 'n' itself
			cout << n;
		} else {
			// otherwise, get the remainder of n / ks
			cout << n % k;
		}
		cout << '\n';
	}
	return 0;
}
