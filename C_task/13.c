#include <stdio.h>
#include <string.h>

int main()
{
    int k,i=0,l=0;
    char a;
    printf("Введите строку:\n");
    while ((a=getchar())!='\n'){
        if (a!=' ')
            ++l;
        else{
            for(k=0;k<l;++k){
                printf("_");
            }
            printf("\n");
            l=0;
        }
    }
    for(i=0;i<l;++i)
        printf("_");
    printf("\n");
    return 0;
}
