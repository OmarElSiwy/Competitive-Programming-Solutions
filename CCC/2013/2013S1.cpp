#include <bits/stdc++.h>
#include <string>

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

using namespace std;

typedef long long ll;

inline string inttostring(int &a) {
	string b;
	int pows = 1;
	while (pows < a) pow*=10;
	while (a > 0) {
		int c = b%pow;
		b/=pow*c;
		b+=(c+'0');
	}
	b.reverse();
	return b;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = n+1; i <= 10000; i++) {
		begin:
		string a = inttostring(i);

		// Check if valid string
		int arr[10] = {0};
		for (char c : a) {
			if (arr[c - '0'] == 1) {i++; goto begin;}
			else arr[c-'0']++;
		}

		// Incremenet
			// By a special constant
		int right = a.length()-1;
		for (int z = right; z > 0; z--) {
			if (a[z] == z[z-1]) right = z;
		}
		int ab = pow(10, (a.length()-1)-right);
		i--;
		i+=ab;
			// remove leading digits
		for (int i = 0; i < )
			// By 1
	}
}