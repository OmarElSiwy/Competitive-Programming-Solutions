#include <iostream>

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using namespace std;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
	cin >> n;
	string a;
	int Ts = 0;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, a);
		for (char c : a) {
			if (c == 'T' || c == 't') {Ts++;}
			else if (c == 'S' || c == 's') {Ts--;}
		}
	}

	if (Ts <= 0) cout << "French";
	else cout << "English";
}