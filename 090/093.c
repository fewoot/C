#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char shuru[1000];

    //scanf("",&);
    gets(shuru);
    for(int i=0;i<(strlen(shuru));++i){
        if(shuru[i]=='x'){
            shuru[i] = 'A';
        }else if(shuru[i]=='y'){
            shuru[i] = 'B';
        }else if(shuru[i]=='z'){
            shuru[i] = 'C';
        }else if(shuru[i]=='X'){
            shuru[i] = 'a';
        }else if(shuru[i]=='Y'){
            shuru[i] = 'b';
        }else if(shuru[i]=='Z'){
            shuru[i] = 'c';
        }else if(shuru[i]<='Z'){
            shuru[i] = (shuru[i]-'A')+'a'+3;
        }else if(shuru[i]>='a'){
            shuru[i] = (shuru[i]-'a')+'A'+3;
        }
    }
    puts(shuru);

    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}


