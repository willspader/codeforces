#include <iostream>

using namespace std;

int fat (int x) {
    int fat = 1;
    for (int i = 1; i <= x; i++) {
        fat *= i;
    }
    return fat;
}

int main() {

    int a, b, fat = 1;
    cin >> a >> b;

    if (a > b) {
        int ansb = fat(b);
        cout << fat << endl;
    } else {
        for (int i = 1; i <= a; i++)
    }

    return 0;
}