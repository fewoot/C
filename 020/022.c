#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a>b+c)
    {
        printf("YES");
     
    }else if (b>a+c)
    {
        printf("YEs");
    }else if (c>a+b)
    {
        printf("YES");
    }else
    {
        printf("ERROR DATA");
    }
    

    //It is base code,under this
    system("pause");
    return 0;
}