#include <stdio.h>

int main()
{
    char a,b,c,d;
    scanf("%c%c%c%c",&a,&b,&c,&d);
    printf("%c %d %c\n",a,a,a+1);
    printf("%c %d %c\n",b,b,b+1);
    printf("%c %d %c\n",c,c,c+1);
    printf("%c %d %c",d,d,d+1);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}