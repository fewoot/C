#include <stdio.h>

int main()
{
    int zongmiaoshu,mid[4],i=0;
    scanf("%d",&zongmiaoshu);
    do
    {
        i++;
        mid[i] = zongmiaoshu % 60;
        zongmiaoshu /= 60;
        //printf("zongmiaoshu%d\n",zongmiaoshu);
        //printf("mid%d\n",mid[i]);
    }while(i<=3);
    printf("%d:",mid[3]);
    printf("%02d:",mid[2]);
    printf("%02d",mid[1]);


    //It is base code,under this
    system("pause");
    return 0;
}