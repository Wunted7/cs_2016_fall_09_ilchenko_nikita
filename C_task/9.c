#include <stdio.h>

int fib(int n)
{
    int i = 0;
    int c = 0;
    int a = 0;
    int b = 1;
    if (n == 0){
        return printf("|%d|%d|\n",n,c); ;
    }
    for (i=0;i<=n;++i){
        c=a;
        a=b;
        b=c+a;
    }
    printf("|%d|%d|\n",n,c);
    return fib(n-1);
}

int main()
{
    int n = 0;
    printf("Введите N\n");
    scanf("%i", &n);
    fib(n);
    printf("\n");
    return 0;
}
