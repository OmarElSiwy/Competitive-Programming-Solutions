#include <bits/stdc++.h>

using namespace std;

inline void perform() {
	int n;
	cin >> n;
	stack<int> branch;	
	stack<int> mountain;

	for (int z = 0; z < n; z++) {
		int val;
		cin >> val;
		mountain.push(val);
	}

	int j = 1;
	while (true) {
		if (mountain.size() > 0 && mountain.top() == j) {
			mountain.pop();
			j++;
		} else if (branch.size() > 0 && branch.top() == j) {
			branch.pop();
			j++;
		} else if (mountain.size() > 0 && mountain.top() != j) {
			int front = mountain.top();
			branch.push(front);
			mountain.pop();
		}
		if (mountain.empty() && branch.empty()) {cout << "Y\n"; return;}
		if (mountain.empty() && !branch.empty() && branch.top() != j) {cout << "N\n"; return;}
	}
}

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		perform();
	}
}