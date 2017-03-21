#include <stdio.h>
#include <math.h>
#include <string.h>

int r(char *a){
    int k,s=0,i;
    k=strlen(a)-1;
    for(i=0;a[i]!='\0';++i)
    {
        if(a[i]=='1')
            s+= pow(2,k);
        --k;
    }
    return s;
}

int main(){
    char a[1000];
    printf("Введите двоичное число\n");
    scanf("%s", a);
    printf("%d\n",r(a));
    return 0;
}
