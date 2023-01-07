#include <bits/stdc++.h>

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	vector<pair<int,int>> freq(1000, pair<int, int>({-1, 0}));
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int val;
		cin >> val;
		if (freq[val].first == -1) {
			freq[val].first = val;
		}
		freq[val].second++;
	}

	sort(freq.begin(), freq.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
		if(a.second == b.second) return a.first > b.first;
		return a.second > b.second;
	});

	int j = 0;
	if(freq[j+1].second == freq[j].second) {
		while (j+1 < 1000 && freq[j+1].second == freq[j].second) j++;
		cout << abs(freq[0].first - freq[j].first);
		return 0;
	} else if (freq[j+2].second == freq[j+1].second) {
		j = 1;
		while (j+1 < 1000 && freq[j+1].second == freq[j].second) j++;
		cout << max(abs(freq[0].first - freq[j].first), abs(freq[0].first - freq[1].first));
		return 0;
	}
	cout << abs(freq[0].first - freq[1].first);
}