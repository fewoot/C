#include <stdio.h>

int main()
{
    int shuru,yushu,temp=0;
    scanf("%d",&shuru);
    for(int i=2;i<shuru;i++){
        yushu = shuru%i;
        if(yushu==0){
            temp++;
        }else{}
    }
    if(temp==0){
        printf("YES");
    }else{
        printf("NO");
    }


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}