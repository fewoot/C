#include <stdio.h>
#include <string.h>

void paixu_from_xiao(int length,int shuru[]){           //从小到大排序，输入 length：数组的个数 和shuru：数组。
    
    for(int temp=1;temp!=0;){
        temp = 0;
        for(int i=0;i<(length-1);++i){
            int temp_1;
            if(shuru[i]>shuru[(i+1)]){
                temp_1 = shuru[i];
                shuru[i] = shuru[(i+1)];
                shuru[(i+1)] = temp_1;
                temp++;
            }
        }
    }
                                                        //coded by fewoot
} 

int main()
{
    int n;

    int shuru[1000];
    scanf("%d",&n);
    //gets();
    for(int i=0;i<n;++i){
        scanf("%d",&shuru[i]);
    }
    //fflush(stdin);
    paixu_from_xiao(n,&shuru);
    scanf("%d",&shuru[n]);
    paixu_from_xiao(n+1,&shuru);
    printf("%d",shuru[0]);
    for(int i=1;i<=n;++i){
        printf(" %d",shuru[i]);
    }


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}