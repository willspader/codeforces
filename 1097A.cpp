#include <iostream>

using namespace std;

int main() {
	
	char str[2], current[2];
	bool flag = false;
	cin >> str;
	
	for (int i = 1; i <= 5; i++) {
		cin >> current;
		if (str[0] == current[0] || str[1] == current[1]) flag = true;
	}
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
