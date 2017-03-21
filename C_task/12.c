#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int k[100];
    int i,max;
    max=k[0];
    printf("Введите строку:\n");
    scanf("%s", a);
    for (i=0;i<strlen(a);++i)
        k[i]=(int)a[i];
    for (i=0;i<strlen(a);++i){
        if (max<k[i])
            max=k[i];
    }
    printf("Самый наибольший ASCII код - %c\n", (char)max);
    return 0;
}
