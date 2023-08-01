#include <stdio.h>

using namespace std;

int main() {
	int k;
	int m;
	scanf("%d\n%d", &k, &m);

	int arr[k];
	for (int i = 0; i < k; i++) {
		arr[i] = i+1;
	}

	for (int i = 0; i < m; i++) {
		int query;
		scanf("%d", &query);
		int step = 1;
		for (int j = 0; j < k; j++) {
			if (arr[j] == 0) continue;
			if (step%query==0) {arr[j] = 0; step = 1; continue;}
			step++;
		} 
	}

	for (int i = 0; i < k; i++) {
		if (arr[i] != 0) printf("%d\n", arr[i]);
	}
}