#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef int datatype1; 

int shuru_number_v2_function(datatype1 data[]);
void paixu_from_small_function(int length,int shuru[]);  

int main()
{
    int data1[100];
    int data2[100];
    int data3[100];
    int temp=0,temp1=0,temp3=0;
    int length1,length2;
    int a;
    scanf("%d",&a);
    length1 = shuru_number_v2_function(data1);
    length2 = shuru_number_v2_function(data2);
    for(int i=0;i<length1;++i){
        temp1 = 0;
        temp3=0;
        for(int n=0;n<length2;++n){
            if(data1[i]==data2[n]){
                temp1++;
            }
        }
        for(int p=0;p<temp;++p){
            if(data1[i]==data3[p]){
                temp3=1;
            }
        }
        if(temp1==0 && temp3==0){
            data3[temp++] = data1[i];
        }
    }
    temp1 = 0;
    for(int i=0;i<length2;++i){
        temp1 = 0;
        temp3=0;
        for(int n=0;n<length1;++n){
            if(data2[i]==data1[n]){
                temp1++;
            }
        }
        for(int p=0;p<temp;++p){
            if(data2[i]==data3[p]){
                temp3=1;
            }
        }
        if(temp1==0 && temp3==0){
            data3[temp++] = data2[i];
        }
    }
    paixu_from_small_function(temp,data3);
    printf("%d",data3[0]);
    for(int i=1;i<temp;++i){
        printf(" %d",data3[i]);
    }
    //scanf("",&);
    //gets();
    //fflush(stdin);



    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

int shuru_number_v2_function(datatype1 data[]){                         //++函数序号：30
    char temp;                                                          //++作用：输入任意个数字
    int i=0;                                                            //++需要：存储数字的数组
    do{                                                                 //++宏定义支持：2
        scanf("%d",&data[i++]);                                         //++宏定义名词：datatype1
    }while((temp=getchar())!='\n');                                     //++返回：数字个数
    return i;                                                           //++coded by fewoot
}

void paixu_from_small_function(int length,int shuru[]){                 //++函数序号：2
    for(int temp=1;temp!=0;){                                           //++作用：将数组从 “小”到 “大”排序
        temp = 0;                                                       //++需要：数组的长度、数组
        for(int i=0;i<(length-1);++i){                                  //++
            int temp_1;                                                 //++说明：此函数采用比较两个相邻的数，并按照规定判断是否调换位置.若发生位置的调换，则次数记录器改变，循环直至不发生调换
            if(shuru[i]>shuru[(i+1)]){                                  //++
                temp_1 = shuru[i];                                      //++
                shuru[i] = shuru[(i+1)];                                //++
                shuru[(i+1)] = temp_1;                                  //++
                temp++;                                                 //++
            }                                                           //++
        }                                                               //++
    }                                                                   //++返回：无
    return;                                                             //++coded by fewoot
}