#include <stdio.h>

int main(void) {
	float x;
	float y;
	float a;
	float b;
	float c;
	float d;
	printf("Введите числа в формате a+bi,x+yi\n ");
	scanf("%f+%fi,%f+%fi", &x, &y, &a, &b);
	c = (x*x*a+x*a*a+x*b*b+a*y*y)/((x+a)*(x+a)+(y+b)*(y+b));
	d = (x*x*b+a*a*y)/((x+a)*(x+a)+(y+b)*(y+b));
	printf("%.3f+%.3fi", c, d);
	return 0;
}
