#include <stdio.h>

int main()
{
    int x = 0;
    int i = 0;
    int f = 1;
    printf("Введите число\n");
    scanf("%i", &x);
    if ((x==0) || (x==1)){
        printf("Факториал = %i\n", f);
    }
    else{
        for (i=1;i<=x;++i){
            f*=i;
        }
        printf("Факториал = %i\n", f);   
    }
    
    return 0;
}
