#include <stdio.h>

int main()
{
    int nian,geshu_self=0,geshu;
    scanf("%d %d",&nian,&geshu);
    do{
        if(0==(nian%100)){
            if(0==(nian%400)){
                geshu_self++;
                nian++;
            }
            nian++;
        }else{  
            if(0==(nian%4)){
                geshu_self++;
                nian++;
            }else{
                nian++;
            }
        }
    }while(geshu_self<geshu);
    printf("%d",(nian-1));

    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}