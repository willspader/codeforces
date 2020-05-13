#include <iostream>
#include <cstring>

using namespace std;

int memo[4001];
int INF = 0x3f3f3f3f;
int a, b, c;

int dp(int n) {

    if (n == 0) return 0;

    if (memo[n] != -1) return memo[n];
    
    int ans = INT_MIN;
    
    if (n >= a) ans = max(ans, dp(n-a)+1);
    if (n >= b) ans = max(ans, dp(n-b)+1);
    if (n >= c) ans = max(ans, dp(n-c)+1);

    return memo[n] = ans;
}

int main() {

    int n;

    cin >> n >> a >> b >> c;

    memset(memo, -1, sizeof(memo));

    int result = dp(n);

    cout << result << endl;

    return 0;
}
