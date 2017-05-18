#include <stdio.h>
#include <math.h>

double function(double x) {
	double func = x*x + x;
	return func;
}

int main()
{
	double d_lim;
	double h_lim;
	char sign;
	scanf("%lf %lf %c", &d_lim, &h_lim, &sign);
	double S[] = { 0.0, 0.0 };
	double Su = 0.0;
	double I = 0.0;
	int sign1 = -1 * sign;
	double delta = pow(10, sign1);
	char string[] = "%.xf";
	string[2] = sign;
	double x;
	int n = 2;
	double h = (h_lim - d_lim);
	double h1 = h / (2 * n);
	double func1 = function(h_lim);
	double func2 = function(d_lim);
	S[1] = h1 / 3 * (func1 + func2);
	while (fabs(S[1] - S[0]) > delta) {
		x = d_lim + h1;
		S[0] = S[1];
		S[1] = 0.0;
		while (x < h_lim) {
			I += 4 * function(x);
			x += h1;
			if (x >= h_lim) {
				I += 0.0;
			}
			else {
				I[1] += 2 * function(x);
				x += h1;
			}
		}
		S[1] = h1 / 3 * (I + func1 + func2);
		Su = S[1];
		++n;
		h1 = h / (2 * n);
		I = 0.0;
	}
	printf(string, Su);
	getchar();
	return 0;
}
