#include <stdio.h>
#include <string.h>

int xiaobiao_fun(char shuru[],int length,int xiabiao[]){        //小计：2019.4.18
    int n=0;                                                    //将每个输入的前后都强制加上一个标记，即xiabiao【】，
    xiabiao[0] = 0;                                             //huansuan函数还没改，现在输出的geshu是下标的有效个数，包括前后。
    n++;
    for(int i=1;i<=length;++i){
        if(shuru[i]=='5'){
            xiabiao[n] = i;
            n++;
        }
    }
    n++;
    xiabiao[(n-1)] = (length+1);
    //printf("n = %d\n",n);
    return n;
}

int huansuan(int geshu,int length,int xiabiao[],int number[],char shuru[]){
    int number_temp=0;
    for(int i=(geshu-1);i>0;--i){
        int chengshu=1;
        if((xiabiao[i]-1)!=(xiabiao[(i-1)]) && xiabiao[i]!=0){
            for(int n=(xiabiao[i]-1);n>(xiabiao[(i-1)]);--n){
                number[number_temp] += ((shuru[n]-'0')*chengshu);
                chengshu = chengshu*10;
            }
            number_temp++;
        }
    }
    return number_temp;
    // int temp=0;
    // if(shuru[(length-1)]!=5){
    //     int chengshu=1;
    //     for(int i=(length-1);i>=(xiabiao[(geshu-1)]+1);i--){
    //         number[temp] += ((shuru[i]-'0')*chengshu);
    //         chengshu = chengshu*10;
    //     }
    //     //printf("number = %d\n",number[temp]);
    //     temp++;    
    // }
    // for(int n=(geshu-1);n>=0;n--){
    //     number[temp] = 0;
    //     int chengshu=1;
    //     //if(xiabiao[n]!=0){
    //         if((xiabiao[n]-1)>=(xiabiao[(n-1)]+1) || (xiabiao[n]-1)==0){
    //             if(shuru[(xiabiao[n]-1)]!='5'){
    //                 for(int i=(xiabiao[n]-1);i>=(xiabiao[(n-1)]+1);i--){
    //                     number[temp] += ((shuru[i]-'0')*chengshu);
    //                     chengshu = chengshu*10;
    //                 }
    //                 //printf("number = %d\n",number[temp]);
    //                 temp++;
    //             }
    //         }
    //     //}
    // }
    // return temp;
}

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
    //char dalei[1000];
    char shuru[1000];
    int number[100];
    for(int i=0;i<=99;++i){
        number[i] = 0;
    }
    int length,geshu;
    int xiabiao[100];
    for(int i=0;i<=99;i++){
        xiabiao[i] = 0;
    }
    //scanf("",&);
    // gets(shuru);
    // fflush(stdin);
    for(int i=1;shuru[(i-1)]!='\n';++i){
        scanf("%c",&shuru[i]);
        length = (i-1);
    }

    //length = strlen(shuru);
    // for(int i=1;i<=length;++i){
    //     printf("%c",shuru[i]);
    // }

    geshu = xiaobiao_fun(&shuru,length,&xiabiao);
    //printf("geshu = %d\n",geshu);

    
    // for(int i=0;i<geshu;++i){
    //     printf("xiabiao = %d\n",xiabiao[i]);
    // }
    int numbergeshu;
    numbergeshu = huansuan(geshu,length,xiabiao,number,shuru);
    // for(int i=0;i<numbergeshu;++i){
    //     printf("number = %d\n",number[i]);
    // }
    paixu_from_xiao(numbergeshu,&number);
    printf("%d",number[0]);
    for(int i=1;i<=(numbergeshu-1);++i){
        printf(" %d",number[i]);
    }

    // int shuzigeshu;
    // shuzigeshu = huansuan(geshu,length,xiabiao,number,shuru);

    // for(int i=0;i<shuzigeshu;i++){
    //     //printf("shuzi = %d",number[i]);
    // }
    // //printf("shuzigeshu = %d\n",shuzigeshu);
    // paixu_from_xiao(shuzigeshu,&number);
    // printf("%d",number[0]);
    // for(int i=1;i<shuzigeshu;++i){
    //     printf(" %d",number[i]);
    // }
    // printf("\n");



    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}