#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void dtoboh(int n,int t,char res[]);

int main()
{
    char res[1000];
    int n,t;
    scanf("%d,%d",&n,&t);
    //gets();
    //fflush(stdin);
    dtoboh(n,t,res);
    puts(res);
    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

void dtoboh(int n,int t,char res[]){
    //int temp=10;
    int temp_1[1000];
    //int yushu;
    //yushu = n%10;
    int i=0;
    for(;n!=0;++i){
        temp_1[i] = n%t;
        //temp = temp*10;
        n = n/t;
    }
    int temp_3 = i;
    for(int n=0;n<temp_3;++n){
        res[n] = temp_1[(i--)-1]+'0';
        res[n+1] = '\000';
    }

    //return temp_3;
}
