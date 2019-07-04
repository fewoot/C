#include <stdio.h>
#include <string.h>

double binTodec(char *str){
    int changdu;
    changdu = strlen(str);
    //char test = *str;
    //printf("%d\n",changdu);
    double shuchu=0;
    int chengshu=1;
    for(int i=(changdu-1);i>=0;i--){
        shuchu = shuchu+((str[i]-'0')*chengshu);
        chengshu *= 2;
    }
    return shuchu;
}  



int main()
{
    char shuru[1000];
    gets(shuru);
    int shuchu;
    //binTodec(&shuru);
    //printf("first = %c",shuru[0]);

    shuchu = binTodec(&shuru);
    printf("%d",shuchu);

    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}