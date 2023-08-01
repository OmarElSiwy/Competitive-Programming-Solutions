#include <bits/stdc++.h>

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

using namespace std;

typedef long long ll;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int w;
	int n;
	cin >> w >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int initial_sum = 0;
	for (int i = 0; i < n && i < 4; i++) {
		initial_sum+=arr[i];
		if (initial_sum > w) {
			cout << i;
			return 0;
		}
	}

	int max_carts = 4;
	for (int i = 0; i+3 < n; i++) {
		initial_sum-=arr[i];
		initial_sum+=arr[i+4];
		if (initial_sum > w) {
			cout << max_carts;
			return 0;
		} 
		max_carts++;
	}
}