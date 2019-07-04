#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int shuru[10];
    for(int i=0;i<10;++i){
        scanf("%d",&shuru[i]);
    }
    int min;
    min = shuru[0];
    for(int i=0;i<10;++i){
        if(shuru[i]<min){
            min = shuru[i];
        }
    }
    printf("%d ",min);
    for(int i=0;i<10;++i){
        if(shuru[i]==min){
            printf("%d",i);
            break;
        }
    }
    //gets();
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}


