#include <stdio.h>

int main()
{
    int i;
    char z[5];

    scanf("%c%c%c%c",&z[1],&z[2],&z[3],&z[4]);
    for(int n=1;n<=4;n++){
        printf("????%c\n",z[n]);
    }
    for(i=1;i<=4;i++){
        if(z[i]=='x'){
            printf("a");
        }else if(z[i]=='y'){
            printf("b");
        }else if(z[i]=='z'){
            printf("c");
        }else{
            printf("%c",z[i]+3);
        }
    }


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}