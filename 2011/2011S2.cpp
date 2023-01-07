#include <vector>
#include <stdio.h>

using namespace std;

int main() {
	vector<char> temporary;
	int n;
	scanf("%d\n", &n);
	temporary.reserve(n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		temporary[i] = getchar_unlocked();
		getchar_unlocked();
	}
	for (int i = 0; i < n; i++) {
		if (getchar_unlocked() == temporary[i]) ans++;
		getchar_unlocked();
	}

	printf("%d", ans);
}