#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int geshu;
    int shuru[1000];
    scanf("%d",&geshu);
    for(int i=0;i<geshu;++i){
        scanf("%d",&shuru[i]);
    }
    shuru[(geshu)] = 11;
    shuru[(geshu+1)] = 12;
    printf("%d",shuru[0]);
    for(int i=1;i<=(geshu+1);++i){
        printf(" %d",shuru[i]);
    }
    
    //gets();
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}


