#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <limits.h>

using namespace std;

const long double PHI = 1.61803398874989484820458683436563811772030917980576;

int main() {
	long long terms;
	long double sum = 1;
	
	cout << "Number of iterations: ";
	cin >> terms;
	
	for (long long n = 1; n <= terms; n++) {
		sum = 1 + (1 / sum);
	}
	
	cout << "\nphi ~= " << setprecision(numeric_limits<long double>::digits10) << sum;
	cout << "\nDifference with actual value of phi: " << setprecision(6) << sum - PHI;
	cout << "\nPercent error: " << abs(sum - PHI) / PHI * 100 << endl;
	
	return 0;
}
