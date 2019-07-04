#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct A datatype;                                                           //++宏定义序号：1
                                                                                //++类型限定：数字类型


struct A{
    int biaozhi;
    int geshu;
};

void paixu_from_big_function(int length,datatype shuru[]);

int main()
{
    struct A data[4];
    char shuru[1000];
    //scanf("",&);
    gets(shuru);
    int daxie=0,xiaoxie=0,shuzi=0,qita=0;
    //fflush(stdin);
    for(int i=0;i<(strlen(shuru));++i){
        if(shuru[i]>='A' && shuru[i]<='Z'){
            daxie++;
        }else if(shuru[i]>='a' && shuru[i]<='z'){
            xiaoxie++;
        }else if(shuru[i]>='0' && shuru[i]<='9'){
            shuzi++;
        }else{
            qita++;
        }
    }
    data[0].geshu = daxie;
    data[0].biaozhi = 0;
    data[1].geshu = xiaoxie;
    data[1].biaozhi = 1;
    data[2].geshu = shuzi;
    data[2].biaozhi = 2;
    data[3].geshu = qita;
    data[3].biaozhi = 3;
    if(data[0].biaozhi==0){
            printf("大写字母：");
        }else if(data[0].biaozhi==1){
            printf("小写字母：");
        }else if(data[0].biaozhi==2){
            printf("数字字符：");
        }else{
            printf("其它字符：");
        }
        printf("%d",data[0].geshu);
    for(int i=1;i<4;++i){
        if(data[i].biaozhi==0){
            printf("\n大写字母：");
        }else if(data[i].biaozhi==1){
            printf("\n小写字母：");
        }else if(data[i].biaozhi==2){
            printf("\n数字字符：");
        }else{
            printf("\n其它字符：");
        }
        printf("%d",data[i].geshu);
    }
    printf("\n从多到少依次输出如下：\n");
    paixu_from_big_function(4,data);
    if(data[0].biaozhi==0){
            printf("大写字母：");
        }else if(data[0].biaozhi==1){
            printf("小写字母：");
        }else if(data[0].biaozhi==2){
            printf("数字字符：");
        }else{
            printf("其它字符：");
        }
        printf("%d",data[0].geshu);
    for(int i=1;i<4;++i){
        if(data[i].biaozhi==0){
            printf("\n大写字母：");
        }else if(data[i].biaozhi==1){
            printf("\n小写字母：");
        }else if(data[i].biaozhi==2){
            printf("\n数字字符：");
        }else{
            printf("\n其它字符：");
        }
        printf("%d",data[i].geshu);
    }

    //Daxie.number = daxie;
    //char a[]="1234rr";

    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

void paixu_from_big_function(int length,datatype shuru[]){              //++函数序号：3
    for(int temp=1;temp!=0;){                                           //++作用：将数组从 “大”到 “小”排序 
        temp = 0;                                                       //++需要：数组的长度、数组
        for(int i=0;i<(length-1);++i){                                  //++
            datatype temp_1;                                            //++宏定义支持：1
            if(shuru[i].geshu<shuru[(i+1)].geshu){                                  //++宏定义名称：datatype
                temp_1 = shuru[i];                                      //++说明：此函数采用比较两个相邻的数，并按照规定判断是否调换位置.若发生位置的调换，则次数记录器改变，循环直至不发生调换
                shuru[i] = shuru[(i+1)];                                //++
                shuru[(i+1)] = temp_1;                                  //++
                temp++;                                                 //++
            }                                                           //++
        }                                                               //++
    }                                                                   //++返回：无
    return;                                                             //++coded by fewoot
}

