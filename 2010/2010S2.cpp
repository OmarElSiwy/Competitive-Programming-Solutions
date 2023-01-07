#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	unordered_map<string, char> storage;
	int n;
	cin >> n;
	storage.reserve(n);
	for (int i = 0; i < n; i++) {
		char a; string b;
		cin >> a >> b;
		storage.insert({b, a});
	}

	string c;
	cin >> c;
	string temp;
	string final;
	for (int i = 0; i < c.length(); i++) {
		temp+=c[i];
		if (storage.count(temp)) {
			final+=storage.at(temp);
			temp.clear();
		}
	}
	cout << final;
}