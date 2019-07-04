#include <stdio.h>
#include <string.h>

void paixu_from_xiao(int length,int shuru[]){           //从小到大排序，输入 length：数组的个数 and 数组；
    
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
    
}

int main()
{
    int number[1000];
    int geshu;
    scanf("%d",&geshu);
    for(int i=0;i<geshu;++i){
        scanf("%d",&number[i]);
    }
    //gets();
    fflush(stdin);
    paixu_from_xiao(geshu,&number);
    int temp;
    temp = number[((geshu-1)/2)];
    number[((geshu-1)/2)] = number[(geshu-1)];
    number[(geshu-1)] = temp;
    printf("%d",number[0]);
    for(int i=1;i<geshu;++i){
        if(i==((geshu-1)/2) || i==(geshu-1)){
            printf(" %d",number[i]);
        }else{
            printf(" 0");
        }
    }

    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}