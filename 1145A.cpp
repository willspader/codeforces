#include <iostream>
#include <algorithm>

using namespace std;

int array[16], n;

int longestSortedArray(int l, int r) {
	int i, count = 1;
	bool sorted = true;
	for (i = l; i < r; i++) {
		if (array[i] > array[i + 1]) {
			sorted = false;
			break;
		}
		count++;
	}
	if (sorted) {
		return count;
	} else {
		return max(longestSortedArray(l, (l + r) / 2), longestSortedArray((l + r) / 2 + 1, r));
	}
}

int main() {
	cin >> n;
	int i;
	for (i = 0; i < n; i++) cin >> array[i];
	cout << longestSortedArray(0, n - 1) << endl;
	
	return 0;
}

