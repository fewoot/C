#include <stdio.h>
#include <string.h>

struct danci{                                                           //此函数从这开始，需要构建组合体。
    char danci_neibu[1000];                                             //此函数用于将一串单词组合成的句子拆分成一个一个单词。
    int length;                                                         //单词存储在组合体中，组合体中存储单词和单词的字数。
};
                                                    //这句代码建议放在main（）里面。
int chaijiejuzi(int length,char shuru_char[],struct danci word[]){      //此函数需要句子的长度（包括空格），句子字符串，组合体数组。
    int temp=0,temp_1=0;
    int i=-1;
    for(temp=0;temp_1!=1;temp++){
        int n=0;
        for(++i;shuru_char[i]!=' ';++i){
            if(i==length){
                temp_1 = 1;
                break;
            }
            word[temp].danci_neibu[n] = shuru_char[i];
            n++;
            word[temp].length = n;
        }
    }
    //for(int i=0;)                                                     //此函数返回单词的个数。
    return temp;                                                        //coded by fewoot
} 

int shuru_function_char(char shuru_char[]){         //此函数用于输入任意（小于1000个）个字符。
    int i=0;                                        //函数返回输入的数据的长度。
    for(i=0;shuru_char[(i-1)]!='\n';++i){           //此函数需要一个参数：存储用的数组。
        scanf("%c",&shuru_char[i]);
    }
    return (i-1);                                   //coded by fewoot
}

int main()
{
    char shuru_char[1000];
    //scanf("",&);
    //gets();
    //fflush(stdin);
    int length;
    length = shuru_function_char(&shuru_char);
    struct danci word[1000];
    int geshu;
    geshu = chaijiejuzi(length,&shuru_char,&word);
    int max=0;
    for(int i=0;i<(geshu-1);++i){
        if(word[i].length > word[(i+1)].length){
            max = i;
        }else{
            max = (i+1);
        }
    }
    for(int i=0;i<(word[max].length);++i){
        printf("%c",word[max].danci_neibu[i]);
    }



    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}