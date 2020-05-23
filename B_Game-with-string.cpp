#include <iostream>
#include <stack>

using namespace std;

int main() {
	
	string str;
	stack<char> stk;
	int moves = 0;
	
	cin >> str;
	
	for (int i = 0; i < str.size(); i++) {
		if (stk.size() && stk.top() == str[i]) {
			moves++;
			stk.pop();
		} else {
			stk.push(str[i]);
		}
	}
	
	if (moves % 2 != 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	
	return 0;
}
