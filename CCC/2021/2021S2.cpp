#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int m, n, k;
	cin >> m >> n >> k;
	unordered_set<int> changed_rows;
	unordered_set<int> changed_columns;

	int yellow_squares = 0;
	for (int i = 0; i < k; i++) {
		char a; int b;
		cin >> a >> b;
		if (a=='R') {
			int size = changed_columns.size();
			if (changed_rows.count(b)) {
				yellow_squares-=(n-2*size);
				changed_rows.erase(b);
			} else {
				yellow_squares+=(n-2*size);
				changed_rows.insert(b);
			}
		} else {
			int size = changed_rows.size();
			if (changed_columns.count(b)) {
				yellow_squares-=(m-2*size);
				changed_columns.erase(b);
			} else {
				yellow_squares+=(m-2*size);
				changed_columns.insert(b);
			}
		}
	}

	cout << yellow_squares;
}