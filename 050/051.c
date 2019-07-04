#include <stdio.h>
#include <string.h>

void fun(int n,char *res){
    char a[1000];
    for(int i=0;i<=(n-1);++i){
        a[i] = res[i];
    }
    for(int i=0;i<=(n-1);++i){
        res[i] = a[((n-1)-i)];
    }
}

int main()
{
    int n;
    char res[1000];
    //scanf("",&);
    gets(res);
    //puts(res);
    fflush(stdin);
    n = strlen(res);
    //printf("n=%d\n",n);
    fun(n,&res);
    puts(res);



    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}