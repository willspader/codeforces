#include <iostream>

using namespace std;

int n, k;
string str;

int check(char x) {
    
    int l, r = 0, cnt = 0, ret = 0;

    for (l = 0; l < n; l++) {
        while ( r < n && (cnt < k || str[r] != x )) {
            if (str[r] == x) {
                cnt++;
            }
            r++;
        }
        if (str[l] == x) {
            cnt--;
        }
        if (ret < r - l) {
            ret = r - l;
        }
    }
    return ret;
}

int main() {

    cin >> n >> k;
    cin >> str;

    int ansa = check('a');
    int ansb = check('b');

    ansa > ansb ? cout << ansa << endl : cout << ansb << endl;

    return 0;
}
