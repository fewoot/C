#include <stdio.h>

int main()
{
    double money,years,rate,mi,sum,tem;
    scanf("%lf,%lf,%lf",&money,&years,&rate);
    //printf("%f\n",money);
    //printf("%f\n",years);
    //printf("%f\n",rate);
    tem = 1 + rate;
    mi = pow(tem,years);
    //printf("%f\n",tem);
    //printf("%f\n",mi);
    sum = money * mi;
    printf("%.2f",sum);

    //It is base code,under this
    system("pause");
    return 0;
}