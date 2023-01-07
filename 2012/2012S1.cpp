#include <stdio.h>

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

using namespace std;

typedef long long ll;

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", ((n-1)*(n-2)*(n-3))/6);
}