#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <limits.h>

using namespace std;

const long double PI = 3.1415926535897932384626433832795028841971693993751;

int main() {
	long long terms;
	bool add = true;
	long double sum = 0;
	
	cout << "Number of terms to sum (10^n): ";
	cin >> terms;
	terms = pow(10, terms);
	
	for (long long n = 0; n < terms; n++) {
		if (add) { sum += (4.0)/((2 * n) + 1); }
		else { sum -= (4.0)/((2 * n) + 1); }
		add = !add;
	}
	
	cout << "\nPi ~= " << setprecision(numeric_limits<long double>::digits10) << sum;
	cout << "\nDifference with actual value of pi: " << setprecision(6) << sum - PI;
	cout << "\nPercent error: " << abs(sum - PI) / PI * 100 << endl;
	
	return 0;
}
