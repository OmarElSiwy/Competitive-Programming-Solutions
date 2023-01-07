#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);

	int n;
	cin>>n;

	vector<pair<ll, string>> storage;

	if (n==0) return 0;

	storage.reserve(n);

	for (int i =0 ; i < n; i++) {
		string a; int b, c, d;
		cin>>a>>b>>c>>d;
		storage.push_back({2*b+3*c+d, a});
	}

	sort(storage.begin(), storage.end(), [](const pair<ll, string> &left, const pair<ll, string> &right) {
		if (left.first > right.first) return true;
		else if (left.first < right.first) return false;
		else {
			if (left.second < right.second) return true;
			else return false;
		}
	});

	cout << storage[0].second << '\n';
	if (n > 1) cout << storage[1].second;
}