#include <stdio.h>

int main()
{
    char zimu,qianyige,houyige;
    scanf("%c",&zimu);
    if(zimu=='A')
    {
        printf("ZAB");
        system("pause");
        return 0;
    }
    else if(zimu=='Z')
    {
        printf("YZA");
        system("pause");
        return 0;
    }
    qianyige = zimu - 1;
    houyige = zimu + 1;
    printf("%c%c%c",qianyige,zimu,houyige);

    //It is base code,under this
    system("pause");
    return 0;
}