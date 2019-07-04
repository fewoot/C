#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct A{
    char shuru_neibu[1000];
    int length;
} Data;

int main()
{
    Data data;
    char shuru[1000];
    //scanf("",&);
    gets(shuru);
    data.length = strlen(shuru);
    strcpy(data.shuru_neibu,shuru);
    char delete;
    scanf("%c",&delete);
    int tiaoguo=0;
    printf("%s\n",data.shuru_neibu);
    printf("%d\n",data.length);
    for(int i=0;i<data.length;++i){
        if(data.shuru_neibu[i]==delete){
            tiaoguo++;
        }else{
            printf("%c",data.shuru_neibu[i]);
        }
    }
    printf("\n%d",data.length-tiaoguo);
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}