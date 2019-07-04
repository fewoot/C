#include <stdio.h>

int main()
{
    int max;
    char a[1000],i;
    for(i=0;a[i]!='\n';i++){
    scanf("%c",a[i]);
    max = (i-1);
    }
    for(i=0;i<=max;i++){
        if(a[i]==0){
            printf("zero")
        }
    }

    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}