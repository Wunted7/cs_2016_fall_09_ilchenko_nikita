#include <stdio.h>

int main()
{
   int x,y;
   char z;
   int i=0;
   printf("Введите операцию:\n");
   scanf("%i%c%i", &x,&z,&y);
   int c=1;
   switch(z){
        case '+':
            printf("%i\n", x+y);
            break;
        case '-':
            printf("%i\n", x-y);
            break;
        case '*':
            printf("%i\n", x*y);
            break;
        case '/':
            printf("%.3f\n", (float)x/y);
            break;
        case '%':
            printf("%i\n", x%y);
            break;
        case '^':
            for(i=0;i<y;++i)
                c*=x;
            printf("%i\n", c);
            break;
   }
    return 0;
}
