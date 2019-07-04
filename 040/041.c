#include <stdio.h>

int main()
{
    int shuru,meige,yu,temp,temp_1=1;
    int meige_fuhe[10000];
    scanf("%d",&shuru);
    for(meige=shuru;meige>2;meige--){
        //printf("meige=%d\n",meige);
        temp = 0;
        for(int i=2;i<meige;i++){
            yu = meige%i;
            //printf("yu=%d\n",yu);
            if(yu==0){
                temp++;
            }
        }
        //printf("temp=%d\n",temp);
        if(temp==0){
            meige_fuhe[temp_1] = meige;
            //printf("temp_1=%d\n",temp_1);
            temp_1++;
        }
    }
    int max = (temp_1-1);
    for(int i=1;i<=max;i++){
        //printf("NO.i=%d\n",meige_fuhe[i]);
    }
    int zongshu=0;
    for(int i=1;i<max;i++){
        if((meige_fuhe[i]-meige_fuhe[(i+1)])==2){
            zongshu++;
        }
    }
    printf("%d",zongshu);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}