#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int a,b,t,p;
    scanf("%d %d",&a,&b);
    //gets();
    //fflush(stdin);
    if (a>b){
        t=a;
        a=b;
        b=t;
    }
    t=b-a;
    p = sqrt(5);
    if (a==(int)(t*(1+p)/2)){ //奇异局势
        printf ("0\n");
    }
    else{
        printf ("1\n");
    }

    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}