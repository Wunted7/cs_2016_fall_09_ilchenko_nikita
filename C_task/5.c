#include <stdio.h>
#include <math.h>

int main()
{
    float t1,t2,s=0.0;
    printf("Введите диапазон в формате t1-t2 и шаг:\n");
    scanf("%f-%f, %f", &t1, &t2, &s);
    float l=(fabs(t2-t1))/s;
    float c = t1;
    do{
        float f=1.8*c+32;
        printf("C|%.2f|%.2f|F\n", c, f);
        c+=l;
    }while (c<t2);
    printf("C|%.2f|%.2f|F\n", t2 ,1.8*t2+32 );
    return 0;
}
