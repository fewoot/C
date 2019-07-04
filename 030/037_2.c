#include <stdio.h>
#include<string.h>
int main()
{
    float a[1001];
    int i,k;
    float temp;
    // 初始化数组
    for(i = 0; i <= 1000; i++){
        a[i] = 0.0f;
    }
    // 分别输入两个多项式
    scanf("%d", &k);
    while(k--){
        scanf("%d%f", &i, &temp);
        a[i] += temp;
    }
    scanf("%d", &k);
    while(k--){
        scanf("%d%f", &i, &temp);
        a[i] += temp;
    }
    // 判断当前多项式的项数
    k = 0;
    for(i = 0; i <= 1000; i++){
        if(a[i]!=0.0){
                k++;
        }
    }
    printf("%d", k);
    // 项数为0则只输出k，且不带空格
    if(k != 0)
        printf(" ");
    for(i=1000; i >= 0; i--){
        if(a[i]!=0.0){
            printf("%d ", i);
            printf("%0.1f", a[i]);
            k--;
            // 输出最后一项后不带空格
            if(k != 0)
                printf(" ");
        }
    }
    system("pause");
    return 0;
}