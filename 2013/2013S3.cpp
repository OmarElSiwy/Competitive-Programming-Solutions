#include <bits/stdc++.h>
#include <string>

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

using namespace std;

typedef long long ll;

int dp1[] = {0, 1, 3};
int dp2[] = {0, 1, 2, 3, 4, 6}
int dp3[] = {0, 1, 2, 3, 3, 4, 5, 6, 7, 9}

int scores[5] = {0};
string games[5] = {""};

int main() {
	// Conditions make sure each team plays the other 3 teams
	// Find possible combinations of the rest of the game that allow fav_t to win

	int fav_t;
	scanf("%d", &fav_t);
	int g;
	scanf("%d", &g);
	for (int i = 0; i < g; i++) {
		int a, b, sa, sb;
		scanf("%d %d %d %d", &a, &b, &sa, &sb);
		a > b ? games[b]+=(a + '0') : games[a]+=(b + '0');
		if (sa<sb) {scores[b]+=3;}
		else if(sa>sb) {scores[a]+=3;}
		else {scores[b]+=1; scores[a]+=1;}
	}

	vector<pair<mis

	for (int i = 4, j = 0; i >= 1; i--, j++) {
		if (games[i].length() != j) {

		}
	}
}