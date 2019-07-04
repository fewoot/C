#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int geshu;
    scanf("%d",&geshu);
    int data[100];
    srand(geshu);
    for(int i=0;i<geshu;++i){

        data[i] = ((rand()%20)+1);
    }
    printf("%d",data[0]);
    for(int i=0;i<geshu;++i){
        printf(",%d",data[i]);
    }
    int min;
    min = data[0];
    for(int i=1;i<geshu;++i){
        if(data[i]<min){
            min = data[i];
        }
    }
    printf("\nmin=%d",min);
    // for(int i=1;i<geshu;++i){
    //     if(data[i]==min){

    //     }else{
    //         if(i==(geshu-1)){
    //             printf("%d",data[i]);
    //         }else{
    //             printf("%d,",data[i]);
    //         }
    //     }
    // }
    printf("\n%d",data[0]);
    for(int i=0;i<geshu;++i){
        if(data[i]==min){

        }else{
            printf(",%d",data[i]);
        }
    }



    //gets();
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}


