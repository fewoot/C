#include <stdio.h>

int main()
{
    int a;
    int yushu;
    int gewei;
    int baiwei;
    int shiwei;

    scanf("%d",&a);
    baiwei = a/100;
    yushu = a%100;
    //printf("%d\n%d",baiwei,yushu);
    shiwei = yushu/10;
    yushu = yushu%10;
    gewei = yushu;

    printf("%d,%d,%d",baiwei,shiwei,gewei);

    //It is base code,under this
    //system("pause");
    return 0;
}