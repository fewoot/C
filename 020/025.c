#include <stdio.h>

int main()
{
    int n,a,b,c,i=0;
    scanf("%d",&n);
    for(c=n;c>=0;c--){
        for(b=c-1;b>=0;b--){
            for(a=b-1;a>=0;a--){
                if(a*a+b*b==c*c){
                    i++;
                }
            }
        } 
    }
    printf("%d",i);


    //It is base code,under this
    system("pause");
    return 0;
}