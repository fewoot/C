#include <stdio.h>

int main()
{

    int a,n;
    scanf("%d%d",&a,&n);
    int sum = 0;
    int x = 0;
    for(int i=0;i<n;i++){
        x = x*10+a;
        sum +=x;

    }
    printf("%d",sum);

    //It is base code,under this
    system("pause");
    return 0;
}