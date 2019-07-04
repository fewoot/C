#include <stdio.h>

int main()
{
    int max,i;
    char a[1000];
    for(i=0;a[(i-1)]!='\n';i++){
        scanf("%c",&a[i]);
        //printf("%c\n",a[i]);
        max = (i-1);
        
    }
    printf("max=%d\n",max);


    /*int geshu=0,yushu;
    yushu = (max+1)%3;
    for(i=0;i<=max;i++){
        if((i+1)==yushu||i%3==0){
            if(i==max){
            printf("%c",a[i]);
            }else{
            printf("%c,",a[i]);   
            }
        }else{
            printf("%c",a[i]);
        }
    }*/
    int yushu,zhiqian,temp;
    yushu = (max)%3;
    /*if(yushu==0){
        for(temp=1,i=0;i<=max;i++,temp++){
            if(temp=3){
            printf("%c,",a[i]);
            temp = 0;
            }else{
            printf("%c",a[i]);  
            }
        }
    }else(yushu!=0){
        for(i=0;i<=zhiqian;i++){
            if(i==zhiqian){
            printf("%c,",a[i]);
            }else(i!=zhiqian){
            printf("%c",a[i]);
            }
        }
        for(temp=1,i=(zhiqian+1);i<=max;i++,temp++){
            if(temp=3){
            printf("%c,",a[i]);
            temp = 0;
            }else{
            printf("%c",a[i]);  
            }
        }
    }*/
    if(max<=2){
        for(i=0;i<=3;i++){
            printf("%c",a[i]);
        }
    }else{

    for(i=0;i<=max;i++){
        if(i==yushu){
            printf("%c,",a[i]);
        }else{
            if((i-yushu)%3==0){
                if(i==max){
                    printf("%c",a[i]);
                }else{
                    printf("%c,",a[i]);
                }
            }else{
                printf("%c",a[i]);
            }
        }
    }
    }


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}