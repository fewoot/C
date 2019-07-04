#include <stdio.h>

int main()
{
    int louceng[100],i=0,shijian,cha,temp;

    do{
        scanf("%d",&louceng[i]);
        i++;
        //printf("i=%d\n",i);
        temp = i-1;
    }while(louceng[temp]!=0);


    int max;
    max = (i-2);
    //printf("max=%d\n",max);
    shijian = 6*louceng[0];

    for(i=1;i<=max;i++){
        temp = i-1;
        cha = louceng[i]-louceng[(temp)];
        //printf("%d\n",cha);
        if(cha<=0){
            shijian = shijian+(4*(-cha));
           // printf("shijian<=%d\n",shijian);
        }else if(cha>0){
            shijian = shijian+(6*cha);
            //printf("shijian>=%d\n",shijian);
        }
    }

    shijian = shijian+(5*(max+1));
    printf("%d",shijian);

    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}