#include <stdio.h>
#include <string.h>

int main()
{
    char shuru[100];
    int length;
    //scanf("",&);
    gets(shuru);
    fflush(stdin);
    length = strlen(shuru);
    for(int n=1;n<=(length-1);++n){
        int temp=1;
        for(int i=(length-n);temp<=n;i++){
            printf("%c",shuru[i]);
            temp++;
        }
        printf(" ");
    }
    puts(shuru);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}