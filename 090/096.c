#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int shuzi_fengjie_function(int number,int shuzi[]);

int main()
{
    char shuru[100];
    //scanf("",&);
    gets(shuru);
    //fflush(stdin);
    int sum=0;
    for(int i=0;i<(strlen(shuru));++i){
        sum = sum +(shuru[i]-'0');
    }
    int shuzi[100];
    int geshu = shuzi_fengjie_function(sum,shuzi);
    if(shuzi[0]==0){
            printf("zero");
        }else if(shuzi[0]==1){
            printf("one");
        }else if(shuzi[0]==2){
            printf("two");
        }else if(shuzi[0]==3){
            printf("three");
        }else if(shuzi[0]==4){
            printf("four");
        }else if(shuzi[0]==5){
            printf("five");
        }else if(shuzi[0]==6){
            printf("six");
        }else if(shuzi[0]==7){
            printf("seven");
        }else if(shuzi[0]==8){
            printf("eight");
        }else if(shuzi[0]==9){
            printf("nine");
        }
    for(int i=1;i<geshu;++i){
        if(shuzi[i]==0){
            printf(" zero");
        }else if(shuzi[i]==1){
            printf(" one");
        }else if(shuzi[i]==2){
            printf(" two");
        }else if(shuzi[i]==3){
            printf(" three");
        }else if(shuzi[i]==4){
            printf(" four");
        }else if(shuzi[i]==5){
            printf(" five");
        }else if(shuzi[i]==6){
            printf(" six");
        }else if(shuzi[i]==7){
            printf(" seven");
        }else if(shuzi[i]==8){
            printf(" eight");
        }else if(shuzi[i]==9){
            printf(" nine");
        }
    }



    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

int shuzi_fengjie_function(int number,int shuzi[]){
    int temp=10;
    int temp_1[1000];
    int yushu;
    yushu = number%10;
    int i=0;
    for(;number!=0;++i){
        temp_1[i] = number%temp;
        //temp = temp*10;
        number = number/10;
    }
    int temp_3 = i;
    for(int n=0;n<temp_3;++n){
        shuzi[n] = temp_1[(i--)-1];
    }
    return temp_3;
}
