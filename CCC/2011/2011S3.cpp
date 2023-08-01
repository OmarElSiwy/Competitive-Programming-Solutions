#include <bits/stdc++.h>

using namespace std;

int binary_expo(int a, int b) {
	int num_temp = 1;
	while (b > 0) {
		if (b & 1) { // odd
			num_temp*=a;
		} 
		a*=a;
		b>>=1;
	}
	return num_temp;
}

bool checkcollision(int &x, int &y, int &m) {
	int left = binary_expo(5, m-1);
	if (m==1) {
		if (x==1||x==5||y>=3||(x==2&&y>=2)||(x==4&&y>=2)) return false;
		return true;
	}

	if ((((x > left && x <= 2*left) || (x > left*3 && x <= left*4)) && (y > left && y <= 2*left)) || (x > 2*left && x <= 3*left && y > 2*left && y <= 3*left)) {
		while (x > 0) x-=left;
		while (y > 0) y-=left;
		y+=left; x+=left;
		m--;
		return checkcollision(x, y, m);
	}

	if ((x > left && x <= 4*left && y <= left) || (x > 2*left && x <= 3*left && y > left && y <= 2*left)) return true;
	
	return false;
}


int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	int tests;
	cin >> tests;
	for (int i = 0; i < tests; i++) {
		int m, x, y;
		cin >> m >> x >> y;
		x++;
		y++;
		cout << (checkcollision(x, y, m) ? "crystal\n" : "empty\n");
	}
}