#include <bits/stdc++.h>

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	string t;
	cin >> t;
	unordered_map<char, int> helper = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
	int sum = 0;
	for (int i = 1; i+2 < t.length(); i+=2) {
		int a = helper.at(t[i+2]);
		int b = helper.at(t[i]);
		if (a > b) {
			sum-=(t[i-1] - '0')*(b);
		} else {
			sum+=(t[i-1] - '0')*(b);
		}
	}
	sum+=(t[t.length()-2] - '0')*(helper.at(t[t.length()-1]));

	cout << sum;
}