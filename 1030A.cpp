#include <iostream>

using namespace std;

int main() {
	
	int n, k, i;
	cin >> n;
	
	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		if (k | 0) {
			printf("HARD\n");
			break;
		}
	}
	if (i == n) printf("EASY\n");
	
	return 0;
}
