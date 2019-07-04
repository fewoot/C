#include <stdio.h>

void booble(int *array,int n){
    // int max,min,middle;
    // max=array[0];
    // min=array[0];
    // middle=array[0];
    int temp,temp_tingzhi=1;
    for(;temp_tingzhi!=0;){
        //printf("temp_ = %d\n",temp_tingzhi);

        temp_tingzhi = 0;
        for(int i=0;i<(n-1);++i){
            if(array[i]>array[(i+1)]){
                temp = array[i];
                array[i] = array[(i+1)];
                array[(i+1)] = temp;
                temp_tingzhi++;
            }
        }
    }
    temp = array[(n-1)];
    array[(n-1)] = array[((n-1)/2)];
    array[((n-1)/2)] = temp;
    // printf("%d\n",array[0]);
    // printf("%d\n",array[(n-1)]);
    // printf("%d\n",array[((n-1)/2)]);
}

int main()
{
    int geshu;
    //scanf("",&);
    scanf("%d",&geshu);
    int shuru[1000];
    // fflush(stdin);
    // //for(int i=0;)
    // gets(shuru);
    for(int i=0;i<=(geshu-1);++i){
        scanf("%d",&shuru[i]);
    }
    for(int i=0;i<=(geshu-1);++i){
        //printf("shuru = %d",shuru[i]);
    }
    // printf("%d\n",shuru[0]);
    // printf("%d\n",shuru[(geshu-1)]);
    // printf("%d\n",shuru[((geshu-1)/2)]);
    //puts(shuru);

    booble(&shuru,geshu);
    //puts(shuru);
    printf("%d",shuru[0]);
    for(int i=1;i<=(geshu-1);++i){
        if(i==(geshu-1)||i==((geshu-1)/2)){
            printf(" %d",shuru[i]);
        }else{
            printf(" %d",0);
        }
    }



    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}