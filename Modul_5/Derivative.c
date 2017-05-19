#include <stdio.h>
#include <math.h>

double function(double x) {
	double func;
	func = x*x + x;
	return func;
}

int main()
{

	double h, x, a, b;
	double Dif = 0;
	double D[] = { 0.0, 0.0 };

	char sign;
	printf("Enter error");
	scanf("%c", &sign);
	char string[] = "%.xf\n";
	string[2] = sign;

	printf("Enter low and high limits: ");
	scanf("%lf %lf", &a, &b);
	printf("Your step: ");
	scanf("%lf", &h);
	x = a;
	D[0] = (1 / (2 * h))*((-3) * function(x) + 4 * (function(x + h)) - (function(x + 2 * h)));
	D[1] = (1 / (2 * h))*(-function(x) + function(x + 2 * h));
	printf(string, D[0]);
	printf(string, D[1]);
	while (x + 2 * h <= b) {
		Dif = (1 / (2 * h))*(function(x) - 4 * (function(x + h)) + 3 * (function(x + 2 * h)));
		x = x + h;
		printf(string, Dif);
	}
	getchar();
	getchar();
	return 0;
}
