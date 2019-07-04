#include <stdio.h>
#include <string.h>

char hanshu(char *str,int n){
    //printf("n=%d\n",n);
    for(int i=n;;){
        if(str[i]==' '){
            //i++;
            return '0';
            //return str[(i+1)];
        }else{
            return str[i];
        }
    }
}

int main()
{
    char shuru[1000];
    //scanf("",&);
    gets(shuru);
    int changdu;
    changdu = strlen(shuru);
    char shuchu;
    printf("%c",shuru[0]);
    for(int i=1;i<=(changdu-2);i++){
        shuchu = hanshu(&shuru,i);
        if(shuchu=='0'){
            
        }else{
            printf("%c",shuchu);
        }
        
    }
    printf("%c",shuru[(changdu-1)]);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}