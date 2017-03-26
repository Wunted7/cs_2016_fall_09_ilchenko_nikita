#include <stdio.h>

int main()
{
	int day=17;
	int month=9;
	printf("%i.%i\n", day, month);
	int c=day;
	day=month;
	month=c;
	printf("%i.%i\n", day, month);
	return 0;
}
