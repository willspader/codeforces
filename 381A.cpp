#include <iostream>

using namespace std;

int main() {
	
	int n;
	
	cin >> n;
	int cards[n];
	
	for (int i = 0; i < n; i++) {
		cin >> cards[i];
	}
	
	int l = 0, r = n - 1, sumS = 0, sumD = 0, cnt = 0;
	
	while (r >= l) {
		if (cards[l] > cards[r]) {
			sumS += cards[l];
			l++;
		} else {
			sumS += cards[r];
			r--;
		}
		cnt++;
		if (cnt == n) break;
		if (cards[l] > cards[r]) {
			sumD += cards[l];
			l++;
		} else {
			sumD += cards[r];
			r--;
		}
		cnt++;
	}
	
	cout << sumS << " " << sumD << endl;
	
	return 0;
}
