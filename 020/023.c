#include <stdio.h>

int main()
{
    int a,b,c,tem_min,tem_max,min,mid,max;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
        tem_min = a;
        tem_max = b;
    }else
    {
        tem_min = b;
        tem_max = a;
    }
    
    if(tem_min<c){
        min = tem_min;
        if(c<tem_max){
            mid = c;
            max = tem_max;
        }else
        {
            max = c;
            mid = tem_max;
        }  
    }else
    {
        min = c;
        mid = tem_min;
        max = tem_max;
    }
    printf("max=%d\n",max);
    printf("mid=%d\n",mid);
    printf("min=%d\n",min);

    int cha,qianzhe,houzhe;
    do{
    cha = mid - min;
    if(cha>0){
    }else
    {
        cha = -cha;
    }
    qianzhe = min;
    houzhe = cha;
    mid = min;
    min = cha;
    }while(houzhe!=qianzhe);
    int zuida;
    zuida = cha;
    printf("zuida?=%d\n",zuida);

    int cha_1,qianzhe_1,houzhe_1;
    do{
    cha_1 = max - zuida;
    if (cha_1>0){

    }else
    {
        cha_1 = -cha_1;
    }
    qianzhe_1 = zuida;
    houzhe_1 = cha_1;
    max = zuida;
    zuida = cha_1;
    }while(houzhe_1!=qianzhe_1);
    int zuida_1;
    zuida_1 = qianzhe_1;
    int zuixiao,yushu_1,yushu_2,yushu_3;

    yushu_1 = a%zuida_1;
    printf("a=%d\n",a);
    printf("yushu1=%d\n",yushu_1);

    yushu_2 = b%zuida_1;
    printf("b=%d\n",b);
    printf("yushu2=%d\n",yushu_2)

    ;yushu_3 = c%zuida_1;
    printf("c=%d\n",c);
    printf("yushu3=%d\n",yushu_3);

    printf("zuida=%d\n",zuida_1);
    printf("zuixiao=%d",zuixiao);



    //It is base code,under this
    //check out your scanf  &&&&&&
    system("pause");
    return 0;
}