#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

double crearpi(int max_iter) {
	double pi = 0.0;
	int n = 0;
	for (n; n < max_iter; n++) {
		double term = (n % 2 == 0) ? 1.0 / (2 * n + 1) : -1.0 / (2 * n + 1);
		pi += term;
	}
	return pi * 4;
}

int main() {
	int max_iter = 10000000;
	double resul = crearpi(max_iter);

	cout << setprecision(7) << resul;
	return 0;
}