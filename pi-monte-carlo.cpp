#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

const long double PI = 3.1415926535897932384626433832795028841971693993751;

double randomDouble() {
	return rand() / (double)RAND_MAX;
}

int main() {
	int points, inCircle = 0;
	srand((unsigned)time(0));
	
	cout << "Number of points (10^n): ";
	cin >> points;
	points = pow(10, points);
	
	for (int i = 0; i < points; i++) {
		if (pow(randomDouble(), 2) + pow(randomDouble(), 2) <= 1) {
			inCircle++;
		}
		if (i % 10000000 == 0 && i > 0) { cout << i / 1000000 << "M points done\n"; }
	}
	
	cout << endl << points << " points calculated.\n";
	cout << inCircle << " points landed in the circle.\n";
	cout << "Pi ~= " << 4 * (inCircle / (double)points);
	cout << "\nDifference with actual value of pi: " << (4 * (inCircle / (double)points)) - PI;
	cout << "\nPercent error: " << abs(4 * (inCircle / (double)points) - PI) / PI * 100 << endl;
	
	return 0;
}
