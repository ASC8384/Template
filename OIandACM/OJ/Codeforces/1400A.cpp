#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

const int size = 2e5 + 9;
const ll  mod  = 1e9 + 7;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
	cin >> t;
	while(t--) {
		int	   n;
		string a;
		string s = "";
		cin >> n;
		cin >> a;

		int k = 0;
		for(int i = 0; i < n; i++, k++)
			s += a[i + k];
		cout << s << '\n';
	}

	return 0;
}