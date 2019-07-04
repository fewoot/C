#include <stdio.h>

char hanshu(char *str,int n){
    if(str[n]==' '){
        return '0';
    }else{
        return str[n];
    }
}

int main()
{
    //scanf("",&);
    //gets();
    char shuru[1000];
    //scanf("",&);
    gets(shuru);
    int changdu,max,i;
    changdu = strlen(shuru);
    max = changdu-1;
    //printf("max=%d\n",max);
    for(i=0;shuru[i]==' ';++i){

    }
    int n=i;
    //printf("n=%d\n",n);

    for(i=max;shuru[i]==' ';--i){

    }
    int n_hou=i;
    //printf("%d",n_hou);
    char shuchu;
    for(int i=0;i<n;++i){
        printf("%c",shuru[i]);
    }
    for(int o=n;o<n_hou;++o){
        shuchu = hanshu(&shuru,o);
        if(shuchu=='0'){

        }else{
            printf("%c",shuchu);
        }
    }
    for(int i=n_hou;i<=max;++i){
        printf("%c",shuru[i]);
    }





    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}