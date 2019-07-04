#include <stdio.h>
#include <string.h>
#include <math.h>

struct student {
    char xuehao[100];
    int xuehao_length;
    char name[100];
    int name_length;
    int grade;
};

struct danci{                                                                   //++函数序号：1
    char danci_neibu[1000];                                                     //++作用：将一串单词组合成的句子拆分成一个一个单词
    int length;                                                                 //++需要：句子的长度（包括空格）、句子字符串、组合体数组（组合体数组在上上句已定义：word[]）
};   

void paixu_from_big(int length,struct student shuru[]){                            //++函数序号：3
    for(int temp=1;temp!=0;){                                           //++作用：将数组从 “大”到 “小”排序 
        temp = 0;                                                       //++需要：数组的长度、数组
        for(int i=0;i<(length-1);++i){                                  //++
            struct student temp_1;                                                 //++
            if(shuru[i].grade<shuru[(i+1)].grade){                                  //++
                temp_1 = shuru[i];                                      //++说明：此函数采用比较两个相邻的数，并按照规定判断是否调换位置.若发生位置的调换，则次数记录器改变，循环直至不发生调换
                shuru[i] = shuru[(i+1)];                                //++
                shuru[(i+1)] = temp_1;                                  //++
                temp++;                                                 //++
            }                                                           //++
        }                                                               //++返回：无
    }                                                                   //++coded by fewoot
} 

int zifuchuan_to_shuzi_simple(int length,char shuru[]){                 //++函数序号：14
    int sum=0;                                                          //++作用：将 “数字字符串”转换为 “数字”（简化）
    int temp=1;                                                         //++需要：字符串长度、字符串
    for(int i=(length-1);i>=0;--i){                                     //++
        sum = sum+(temp*(shuru[i]-'0'));                                //++另外：这个函数是简化的版本，规定字符串中无其他符号（包括负号）
        temp = temp*10;                                                 //++
    }                                                                   //++返回：换算后的数字
    return sum;                                                         //++coded by fewoot
}

                                                                           //++
                                                        //++另外：这句代码建议放在main（）里面
int chai_jie_zifuchuan(int length,char shuru_char[],struct danci word[]){       //++
    int temp=0,temp_1=0;                                                        //++
    int i=-1;                                                                   //++结构：单词存储在组合体中，组合体中存储单词和单词的字数
    for(temp=0;temp_1!=1;temp++){                                               //++
        int n=0;                                                                //++
        for(++i;shuru_char[i]!=' ';++i){                                        //++
            if(i==length){                                                      //++
                temp_1 = 1;                                                     //++
                break;                                                          //++
            }                                                                   //++
            word[temp].danci_neibu[n] = shuru_char[i];                          //++
            n++;                                                                //++
            word[temp].length = n;                                              //++
        }                                                                       //++
    }                                                                           //++返回：单词的个数
    return temp;                                                                //++coded by fewoot
}




int main()
{
    int renshu;
    int length;
    struct danci word[3];
    scanf("%d",&renshu);
    struct student shuru[100];
    for(int i=0;i<renshu;++i){
        char shuru_char[1000];
        fflush(stdin);
        gets(shuru_char);
        fflush(stdin);
        length = strlen(shuru_char);
        chai_jie_zifuchuan(length,shuru_char,word);
        strcpy(shuru[i].xuehao,word[0].danci_neibu);
        shuru[i].xuehao_length = word[0].length;
        strcpy(shuru[i].name,word[1].danci_neibu);
        shuru[i].name_length = word[1].length;
        shuru[i].grade = zifuchuan_to_shuzi_simple(word[2].length,word[2].danci_neibu);

    }
    paixu_from_big(renshu,shuru);
    for(int i=0;i<shuru[0].xuehao_length;++i){
            printf("%c",shuru[0].xuehao[i]);
        }
    printf(" ");
    for(int i=0;i<shuru[0].name_length;++i){
        printf("%c",shuru[0].name[i]);
    }
    printf(" ");
    printf("%d",shuru[0].grade);

    for(int n=1;n<renshu;++n){
        printf(" ");
        for(int i=0;i<shuru[n].xuehao_length;++i){
            printf("%c",shuru[n].xuehao[i]);
        }
        printf(" ");
        for(int i=0;i<shuru[n].name_length;++i){
            printf("%c",shuru[n].name[i]);
        }
        printf(" ");
        printf("%d",shuru[n].grade);
    }


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}