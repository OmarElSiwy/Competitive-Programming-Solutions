#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	int n;
	scanf("%d", &n);
	vector<pair<int, int>> storage;
	storage.reserve(n);
	vector<int> width;
	width.reserve(n);
	int val;
	scanf("%d", &val);
	for(int i =0, val2; i < n; i++) {
		scanf("%d", &val2);
		storage.push_back({val, val2});
		val=val2;
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &val);
		width.push_back(val);
	}

	double sum_area = 0;
	for(int i = 0; i < n; i++) {
		sum_area+=((double)(width[i]))*(((double)storage[i].first+(double)storage[i].second)/2);
	}
	printf("%.1f", sum_area);
}