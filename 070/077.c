#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    //gets();
    //fflush(stdin);
    int yushu;
    yushu = a%b;
    int temp,temp1;
    temp = a;
    temp1 = b;
    for(;yushu!=0;){
        a = b;
        b = yushu;
        if(a<b){
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
        yushu = a%b;
    }
    //
    printf("最大公约数是%d\n",b);
    //
    printf("最小公倍数是%d",(temp*temp1)/b);


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}


