#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void yidong_function(int geshu,int shuru[]);

int main()
{
    int shuru[100];
    int geshu;
    int yidong;
    scanf("%d %d",&geshu,&yidong);
    for(int i=0;i<geshu;++i){
        scanf("%d",&shuru[i]);
    }
    for(int i=0;i<yidong;++i){
    
        yidong_function(geshu,shuru);
    }//fflush(stdin);
    printf("%d",shuru[0]);
    for(int i=1;i<geshu;++i){
        printf(" %d",shuru[i]);
    }


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

void yidong_function(int geshu,int shuru[]){
    int temp;
    temp = shuru[(geshu-1)];
    for(int i=(geshu-1);i>=0;--i){
        shuru[i] = shuru[(i-1)];
    }
    shuru[0] = temp;
}