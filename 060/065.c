#include <stdio.h>
#include <string.h>

struct danci{                                                           //此函数从这开始，需要构建组合体。
    char danci_neibu[1000];                                             //此函数用于将一串单词组合成的句子拆分成一个一个单词。
    int length;                                                         //单词存储在组合体中，组合体中存储单词和单词的字数。
};
                                                    //这句代码建议放在main（）里面。
int chaijiejuzi(int length,char shuru_char[],struct danci word[]){      //此函数需要句子的长度（包括空格），句子字符串，组合体数组。
    int temp=0,temp_1=0;                                                //接上句：组合体数组在上上句已定义：word[]。
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

struct jilu{
    char haoma[1000];
    int haomachangdu;
    int qiandao;
    int qiantui;
};

int time_transform(char shuru[]){                                       //此函数用于从时间中得出总秒数。
    int temp=0;                                                         //输入规范：“xx:xx:xx”
    temp = temp+(shuru[7]-'0');
    temp = temp+(10*(shuru[6]-'0'));
    temp = temp+(60*(shuru[4]-'0'));
    temp = temp+(600*(shuru[3]-'0'));
    temp = temp+(3600*(shuru[1]-'0'));
    temp = temp+(36000*(shuru[0]-'0'));
    return temp;                                                        //函数返回一个总秒数
}   

int shuru_function_char(char shuru_char[]){                             //此函数用于输入任意（小于1000个）个字符。
    int i=0;                                                            //此函数需要一个参数：存储用的数组。
    for(i=0;shuru_char[(i-1)]!='\n';++i){                               
        scanf("%c",&shuru_char[i]);                 
    }                                                                   //函数返回输入的数据的长度。
    return (i-1);                                                       //coded by fewoot
} 

int main()
{
    int n,length;
    scanf("%d",&n);
    //gets();
    fflush(stdin);
    struct jilu data[100];
    char shuru[1000];
    struct danci word[1000];
        for(int i=0;i<n;++i){
        length = shuru_function_char(&shuru);
        int temp;
        temp = chaijiejuzi(length,&shuru,&word);
        strcpy(&data[i].haoma,&word[0].danci_neibu);
        data[i].haomachangdu = word[0].length;
        data[i].qiandao = time_transform(&word[1].danci_neibu);
        data[i].qiantui = time_transform(&word[2].danci_neibu);
        }
    int min,max;
    min = 0;
    max = 0;
    for(int i=0;i<n;++i){
        if(data[min].qiandao>(data[i].qiandao)){
            min = i;
        }
    }
    for(int i=0;i<n;i++){
        if(data[max].qiandao<data[i].qiantui){
            max = i;
        }
    }
    for(int i=0;i<(data[min].haomachangdu);++i){
        printf("%c",data[min].haoma[i]);
    }
    printf(" ");
    for(int i=0;i<(data[max].haomachangdu);++i){
        printf("%c",data[max].haoma[i]);
    }



    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}
