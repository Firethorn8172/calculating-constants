#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <limits.h>

using namespace std;

const long double E = 2.71828182845904523536028747135266249775724709369995;

int main() {
	long long terms, factorial = 1;
	long double sum = 0;
	
	cout << "Number of terms to sum: ";
	cin >> terms;
	
	for (long long n = 1; n <= terms; n++) {
		sum += 1.0 / factorial;
		factorial *= n;
	}
	
	cout << "\ne ~= " << setprecision(numeric_limits<long double>::digits10) << sum;
	cout << "\nDifference with actual value of e: " << setprecision(6) << sum - E;
	cout << "\nPercent error: " << abs(sum - E) / E * 100 << endl;
	
	return 0;
}
