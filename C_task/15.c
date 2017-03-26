#include <stdio.h>
#include <string.h>

int main()
{
    int j=0, i=0, l=0;
    char a[1000], b[1000], c;
    for (i=0;i<1000;++i){
        a[i]='\0';
        b[i]='\0';
    }
    printf("Введите строку:\n");
    gets(a);
    for (i=0; i<strlen(a);++i){
        if(a[i]!=a[i+1]){
            b[j]=a[i];
            ++j;
        }
    }
    printf("%s\n", b);
    return 0;
}
