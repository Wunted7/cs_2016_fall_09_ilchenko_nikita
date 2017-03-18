#include <stdio.h>
#define swap(t,x,y) ({t c = x; x = y; y = c;})
int main()
{
    int x, y;
    scanf("%i,%i", &x,&y);
    swap(float,x,y);
    printf("%i %i\n", x ,y);
    return 0;
}
