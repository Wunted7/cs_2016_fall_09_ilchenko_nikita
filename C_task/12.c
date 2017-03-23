#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    char a[100];
    int k[100];
    int i=0,max;
    max=k[0];
    int l=0;
    printf("Введите строку:\n");
    while((c=getchar())!='\n'){
        a[i]=c;
        ++i;
        ++l;
    }
    for (i=0;i<l;++i){
        k[i]=(int)a[i];
        if (max<k[i])
            max=k[i];
    }
    printf("Самый наибольший ASCII код - %c\n", (char)max);
    return 0;
}
