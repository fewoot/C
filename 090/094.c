#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mystrchr(char string[],char c);

int main()
{
    char shuru[100];
    char a;
    
    gets(shuru);
    //fflush(stdin);
    scanf("%c",&a);
    printf("%d",mystrchr(shuru,a));

    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

int mystrchr(char string[],char c){
    for(int i=0;i<(strlen(string));++i){
        if(string[i]==c){
            return i;
        }
    }
    return -1;
}
