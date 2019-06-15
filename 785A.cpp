#include <iostream>

using namespace std;

int main() {
	
	int n, sum = 0;
	string p;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> p;
		if (p == "Tetrahedron") sum += 4;
		else if (p == "Cube") sum += 6;
		else if (p == "Octahedron") sum += 8;
		else if (p == "Dodecahedron") sum += 12;
		else if (p == "Icosahedron") sum += 20;
	}
	
	printf("%d\n", sum);
	
	return 0;
}
