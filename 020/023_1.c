#include <stdio.h>

int main()
{

    int a,b,c,i,max,yu_1,yu_2,yu_3;
    scanf("%d%d%d",&a,&b,&c);
    max = a;
    if(max<b){
        max = b;
    }
    if(max<c){
        max = c;
    }
    i = max;
    do{
        yu_1 = a%i;
        yu_2 = b%i;
        yu_3 = c%i;
        //printf("%d,%d,%d\n",yu_1,yu_2,yu_3);
        i--;
    }while(yu_1||yu_2||yu_3);
    i++;
    printf("%d ",i);
    i = max;
    do{
        yu_1 = i%a;
        yu_2 = i%b;
        yu_3 = i%c;
        i++;

    }while(yu_1||yu_2||yu_3);
    i--;
    printf("%d",i);


    //It is base code,under this
    system("pause");
    return 0;
}