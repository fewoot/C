//
//前言：此函数集由 fewoot 即 苑** 编写，用的开心 ( •̀ ω •́ )✧
//
//函数注释规范：1.函数序号
//             2.作用
//             3.需要
//             4~n-3.其他
//             n-2.返回
//             n-1.coded by fewoot
//             n（结尾）.此函数截止到此！！！！！！！！！！！！！！！！！！
//
//
//另外：函数注释尽量在 73列开始
//
//
//
//
//结构体注释规范：1.结构体序号
//              2.包含
//              3~n-2.其他
//              n-1.coded by fewoot
//              n（结尾）.此结构体截止到此！！！！！！！！！！！！！！！！！
//
//
//宏定义注释规范：1.宏定义序号
//              2.类型限定
//
//
//区域符号说明：“//*******//”：函数
//             “//------//”：宏定义
//             “//······//”：结构体
//             “   //++   ”：注释
//             “//~~~~~~//”：其他
//
//
//
//
//名词说明：1.另外：表明此行代码有特别注意的地方
//         2.说明：解释此函数的大体思路
//         3.结构：说明此行代码的结构组成
//         4.函数支持：说明在此处调用其它函数（标明函数序号）
//         5.结构体支持：说明在此处需要调用结构体
//         6.宏定义支持：说明在此处需要定义宏
//         7.宏定义名词：解释宏定义后的名词
//         8.成功返回 1：说明成功运行返回 1
//         9.失败返回 -1：说明运行失败返回 -1
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
//函数总结：
//strcmp(char *data1,char *data2);         对两个字符串进行大小写敏感的比较,相同返回 0       
//strcmpi(char *data1,char *data2);        对两个字符串进行大小写不敏感的比较，相同返回 0     
//strlen(char *data);                      计算字符串的长度                                
//strcpy(char *data1,char *data2);         将data2的数据复制到data1
//fflush(stdin);                           清除输入缓存
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//------------------------------------------------------------------------------//
typedef ??? datatype;                                                           //++宏定义序号：1
                                                                                //++类型限定：数字类型
//------------------------------------------------------------------------------//
#define Ok 1                                                                    //++宏定义序号：2
                                                                                //++类型限定：成功时提示
//------------------------------------------------------------------------------//
#define Wrong -1                                                                //++宏定义序号：3
                                                                                //++类型限定：错误时提示
//------------------------------------------------------------------------------//

//··············································································//
struct danci{                                                                   //++结构体序号：1
    char danci_neibu[1000];                                                     //++包含：字符串、此字符串的长度
    int length;                                                                 //++coded by fewoot
};                                                                              //++此结构体截止到此！！！！！！！！！！！！！！！！！！
                                            struct danci word[1000];            //++另外：这句代码建议放在main（）里面
//··············································································//
typedef struct A{                                                               //++结构体序号：2
    char data[1000];                                                            //++包含：字符串、指向下一数据的指针
                                                                                //++另外：此结构体构建了一个新的类型：list
    struct A *next;                                                             //++coded by fewoot
} list;                                                                         //++此结构体截止到此！！！！！！！！！！！！！！！！！
//··············································································//
typedef struct B{                                                               //++结构体序号：3
    datatype data;                                                              //++包含：链式栈数据、指向下一项的指针、最后一个数据的指针
    struct B *next;                                                             //++另外：此结构体构建了一个新的类型：stack
    struct B *last;                                                             //++coded by fewoot
}stack;                                                                         //++此结构体截止到此！！！！！！！！！！！！！！！！！
//··············································································//
typedef struct C {                                                              //++结构体序号：4
	datatype *data;                                                             //++包含：顺序表指针（通常为数组）、目前长度、总长度
	int length_now;                                                             //++另外：此结构体定义了一个新的类型：selist
	int length_all;                                                             //++coded by fewoot
} selist;                                                                       //++此结构体截止到此！！！！！！！！！！！！！！！！！
//··············································································//
typedef struct D{                                                               //++结构体序号：5
    datatype *data;                                                             //++包含：顺序栈指针、数据总个数、数据目前个数
    int number_all;                                                             //++另外：此结构体定义了一个新的类型：sestack
    int number_now;                                                             //++coded by fewoot
} sestack;                                                                      //++此结构体截止到此！！！！！！！！！！！！！！！！！
//··············································································//

//索引：  
//**************************************************************************************//
stack *create_stack_function();                                                         //     创建链式栈           (24)
int add_stack_function(stack *start,datatype shuru);                                    //     添加数据入链式栈      (25)
datatype put_stack_function(stack *start);                                              //     取出数据出链式栈      (26)
int length_stack_function(stack *start);                                                //     计算链式栈的数据个数  (27)
int judge_empty_stack_function(stack *start);//empty=0;or1                              //     判断是否为空链式栈    (28)
int wipeall_stack_function(stack *start);                                               //     清除所有数据         (29)
//**************************************************************************************//
int create_se_stack_function(sestack *start,int length_all);                            //     创建顺序栈           (40)
int add_se_stack_function(sestack *start,datatype shuru);                               //     入顺序栈             (41)
datatype put_se_stack_function(sestack *start);                                         //     出顺序栈             (42)
int length_se_stack_function(sestack *start);                                           //     计算顺序栈数据个数    (43)
int judge_se_stack_function(sestack *start);                                            //     判断是否为空栈        (44)
int wipe_se_stack_function(sestack *start);                                             //     清除顺序栈           (45)
//**************************************************************************************//
int output(list *start);                                                                //     输出全部数据         (15)
list *create_empty_function(int geshu);                                                 //     创建链表             (16)
int add_function(int location,list *start,char shuru[]);                                //     添加数据             (17)
int delete_function(int location,list *start);                                          //     删除数据             (18)
int modify_function(int location,list *start,char shuru[]);                             //     修改数据             (19)
int wipe_all_function(list *start);                                                     //     清空数据             (20)
int length_function(list *start);                                                       //     计算个数             (21)
int find_function(list *start,char shuru[]);                                            //     查找数据位置         (22)
int delete_find_funciton(list *start,char shuru[]);                                     //     删除所有指定字符数据  (23)
//**************************************************************************************//
int create_se_funtion(selist *start,int length);                                        //     创建顺序表           (33)
int add_se_function(selist *start, datatype shuru,int location);                        //     添加数据             (34)
int delete_se_function(selist *start,int location);                                     //     删除数据             (35)
int wipe_se_function(selist *start);                                                    //     清除所有             (36)
int find_se_function(selist *start,datatype shuru);                                     //     查找数据             (37)
int output_se_function(selist *start);                                                  //     输出数据             (38)
int modify_se_function(selist *start,int location,datatype shuru);                      //     修改数据             (39)
//**************************************************************************************//
int chai_jie_zifuchuan_function(int length,char shuru_char[],struct danci word[]);      //     拆解句子             (1)
int shuru_char_function(char shuru_char[]);                                             //     输入字符             (4)
int shuru_int_function(char shuru_char[],int shuru_int[]);                              //     输入数字             (5)
int shuru_number_v2_function(datatype data[]);                                          //     输入数字（简单）     (30)
//**************************************************************************************//
int paixu_from_small_function(int length,datatype shuru[]);                             //     小到大排序           (2)
int paixu_from_big_function(int length,datatype shuru[]);                               //     大到小排序           (3)
//**************************************************************************************//
int zifuchuan_to_shuzichuan_function(int length,char shuru_char[],int shuru_number[]);  //     数字字符串转数字串    (6)
double zifuchuan_to_shuzi_function(int length,char shuru_char[]);                       //     字符串转数字         (7)
int zifuchuan_to_shuzi_simple_function(int length,char shuru[]);                        //     字符串转数字（简化）  (14)
int time_transform_function(char shuru[]);                                              //     时间转秒数           (8)
int daxie_zhuan_xiaoxie_function(char shuru[]);                                         //     大写转小写           (31)
int shuzi_fengjie_function(int number,int shuzi[]);                                     //     数字拆解单个数       (32)
//**************************************************************************************//
double arithmetic_mean_function(double data[],int n);                                   //     算术平均值           (9)
double arithmetic_mean_deviation_function(double data[],int n);                         //     算术平均偏差         (10)
double standard_error_function(double data[],int n);                                    //     标准误差             (11)
double standard_deviation_function(double data[],int n);                                //     标准偏差             (12)
double standard_deviation_of_arithmetic_mean_function(double data[],int n);             //     算术平均值的标准偏差  (13)
//**************************************************************************************//

int main()
{   
    
    
    //It is base code, up to this point
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}


int chai_jie_zifuchuan_function(int length,char shuru_char[],struct danci word[]){       //++函数序号：1
    int temp=0,temp_1=0;                                                                 //++作用：将一串单词组合成的句子拆分成一个一个单词
    int i=-1;                                                                            //++需要：句子的长度（包括空格）、句子字符串、组合体数组（组合体数组在上上句已定义：word[]）
    for(temp=0;temp_1!=1;temp++){                                                        //++结构体支持：1
        int n=0;                                                                         //++
        for(++i;shuru_char[i]!=' ';++i){                                                 //++
            if(i==length){                                                               //++结构：单词存储在组合体中，组合体中存储单词和单词的字数
                temp_1 = 1;                                                              //++
                break;                                                                   //++
            }                                                                            //++
            word[temp].danci_neibu[n] = shuru_char[i];                                   //++
            n++;                                                                         //++
            word[temp].length = n;                                                       //++
        }                                                                                //++
    }                                                                                    //++返回：单词的个数
    return temp;                                                                         //++coded by fewoot
}                                                                                        //++此函数截止到此！！！！！！！！！！！！！！！！！！

int paixu_from_small_function(int length,datatype shuru[]){             //++函数序号：2
    for(int temp=1;temp!=0;){                                           //++作用：将数组从 “小”到 “大”排序
        temp = 0;                                                       //++需要：数组的长度、数组
        for(int i=0;i<(length-1);++i){                                  //++
            datatype temp_1;                                            //++说明：此函数采用比较两个相邻的数，并按照规定判断是否调换位置.若发生位置的调换，则次数记录器改变，循环直至不发生调换
            if(shuru[i]>shuru[(i+1)]){                                  //++
                temp_1 = shuru[i];                                      //++宏定义支持：1
                shuru[i] = shuru[(i+1)];                                //++宏定义名称：datatype
                shuru[(i+1)] = temp_1;                                  //++
                temp++;                                                 //++宏定义支持：2、3
            }                                                           //++宏定义名词：Ok、Wrong
        }                                                               //++
    }                                                                   //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止于此！！！！！！！！！！！！！！！！！！！！

int paixu_from_big_function(int length,datatype shuru[]){               //++函数序号：3
    for(int temp=1;temp!=0;){                                           //++作用：将数组从 “大”到 “小”排序 
        temp = 0;                                                       //++需要：数组的长度、数组
        for(int i=0;i<(length-1);++i){                                  //++
            datatype temp_1;                                            //++宏定义支持：1
            if(shuru[i]<shuru[(i+1)]){                                  //++宏定义名称：datatype
                temp_1 = shuru[i];                                      //++说明：此函数采用比较两个相邻的数，并按照规定判断是否调换位置.若发生位置的调换，则次数记录器改变，循环直至不发生调换
                shuru[i] = shuru[(i+1)];                                //++
                shuru[(i+1)] = temp_1;                                  //++
                temp++;                                                 //++宏定义支持：2、3
            }                                                           //++宏定义名词：Ok、Wrong
        }                                                               //++
    }                                                                   //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止于此！！！！！！！！！！！！！！！！！！！！


int shuru_char_function(char shuru_char[]){                             //++函数序号：4
    int i=0;                                                            //++作用：输入任意（取决于定义）个字符
    for(i=0;shuru_char[(i-1)]!='\n';++i){                               //++需要：字符串数组
        scanf("%c",&shuru_char[i]);                                     //++
    }                                                                   //++返回：字符的个数（不包括回车）
    return (i-1);                                                       //++coded by fewoot
}                                                                       //++此函数截止于此！！！！！！！！！！！！！！！！！！！！

int shuru_int_function(char shuru_char[],int shuru_int[]){                                  //++函数序号：5                                
                                                                                            //++作用：输入任意（取决于定义）个数字
    int temp;                                                                               //++需要：字符串数组、数字数组
    temp = shuru_char_function(shuru_char);                                                 //++函数支持：4
    int temp_1;                                                                             //++说明：首先用函数 4得到数字字符，再用函数 1将字符拆分成一个一个数字字符，再用函数 7将数字字符转换成数字
    temp_1 = chai_jie_zifuchuan_function(temp,shuru_char,word);                             //++函数支持：1
                                                                                            //++结构：每个数字字符存储在 word[]中
    for(int i=0;i<temp_1;++i){                                                              //++另外：在此函数中要调用word[]，因此要让word[]定义在全局中
        shuru_int[i] = zifuchuan_to_shuzi_function(word[i].length,&word[i].danci_neibu);    //++函数支持：7
    }                                                                                       //++返回：数字的个数
    return temp_1;                                                                          //++coded by fewoot
}                                                                                           //++此函数截至于此！！！！！！！！！！！！！！！！！

int zifuchuan_to_shuzichuan_function(int length,char shuru_char[],int shuru_number[]){      //++函数序号：6
    for(int i=0;i<length;i++){                                                              //++作用：将一个 “数字字符串” 转换成 “数字串”
        shuru_number[i] = (shuru_char[i]-'0');                                              //++需要：字符串长度、字符串数组、数字数组
                                                                                            //++另外：此函数输入的字符串格式是正整数
                                                                                            //++宏定义支持：2、3
                                                                                            //++宏定义名词：Ok、Wrong
    }                                                                                       //++返回：成功返回 1
    return Ok;                                                                              //++coded by fewoot
}                                                                                           //++此函数截至于此！！！！！！！！！！！！！！！！！

double zifuchuan_to_shuzi_function(int length,char shuru_char[]){       //++函数序号：7
    double temp=1;                                                      //++作用：将一个 “数字字符串” 转换为 “数字”
    double sum=0;                                                       //++需要：字符串长度、字符串
    int temp_1 = 0;                                                     //++
    for(int i=0;i<length;++i){                                          //++
        if(shuru_char[i]=='.'){                                         //++说明：在开始对字符串中的 ‘.’进行检测，进行整数、小数计算
            temp_1 = i;                                                 //++
            break;                                                      //++
        }                                                               //++
    }                                                                   //++
	if(temp_1==0){                                                      //++
		if(shuru_char[0]=='-'){                                         //++
			for(int i=(length-1);i>0;--i){                              //++
				sum = sum+(temp*(shuru_char[i]-'0'));                   //++
				temp = temp*10;                                         //++
			}                                                           //++
			sum = -sum;                                                 //++
		}else{                                                          //++
			for(int i=(length-1);i>=0;--i){                             //++
				sum = sum+(temp*(shuru_char[i]-'0'));                   //++
				temp = temp*10;                                         //++
			}                                                           //++
		}                                                               //++
	}else{                                                              //++
		if(shuru_char[0]=='-'){                                         //++
			for(int i=(temp_1-1);i>0;i--){                              //++
				sum = sum+(temp*(shuru_char[i]-'0'));                   //++说明：对于小数的整数部分与下一句一样，小数部分从左到右依次乘以因数，每称一次因数变为原先的 0.1倍，依次累加
				temp = temp*10;                                         //++说明：对于整数从每一个字符串的末尾开始乘以因数，每计算一次因数变为 10倍，依次累加
			}                                                           //++
			temp = 0.1;                                                 //++
			for(int i=(temp_1+1);i<length;++i){                         //++
				sum = sum+(temp*(shuru_char[i]-'0'));                   //++
				temp = temp*0.1;                                        //++
			}                                                           //++
			sum = -sum;                                                 //++
		}else{                                                          //++
			for(int i=(temp_1-1);i>=0;i--){                             //++
				sum = sum+(temp*(shuru_char[i]-'0'));                   //++
				temp = temp*10;                                         //++
			}                                                           //++
			temp = 0.1;                                                 //++
			for(int i=(temp_1+1);i<length;++i){                         //++
				sum = sum+(temp*(shuru_char[i]-'0'));                   //++
				temp = temp*0.1;                                        //++
			}                                                           //++
		}                                                               //++
	}                                                                   //++返回：换算后的数字（浮点数）
    return sum;                                                         //++coded by fewoot
}                                                                       //++此函数截止于此！！！！！！！！！！！！！！！！！！


int time_transform_function(char shuru[]){                              //++函数序号：8
    int temp=0;                                                         //++作用：从时间中得出总秒数
    temp = temp+(shuru[7]-'0');                                         //++需要：字符串（格式：“xx:xx:xx”）
    temp = temp+(10*(shuru[6]-'0'));                                    //++
    temp = temp+(60*(shuru[4]-'0'));                                    //++
    temp = temp+(600*(shuru[3]-'0'));                                   //++
    temp = temp+(3600*(shuru[1]-'0'));                                  //++
    temp = temp+(36000*(shuru[0]-'0'));                                 //++返回：总秒数
    return temp;                                                        //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！！

double arithmetic_mean_function(double data[],int n){                   //++函数序号：9
    double sum=0;                                                       //++作用：计算算术平均值
    for(int i=0;i<n;i++){                                               //++需要：数字数组、数字个数
        sum = sum+data[i];                                              //++
    }                                                                   //++返回：算术平均值
    return (sum/n);                                                     //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！！
           
double arithmetic_mean_deviation_function(double data[],int n){         //++函数序号：10
    // float temp=0;                                                    //++作用：计算算术平均偏差
    // for(int i=1;i<=n;++i){                                           //++需要：数字数组、数字个数
    //     temp = temp+((data[i]-aver_fun)*(data[i]-aver_fun));         //++
    // }                                                                //++
    // return (sqrt((temp/n)));                                         //++
    double aver_fun;                                                    //++
    aver_fun = arithmetic_mean_function(data,n);                        //++函数支持：9
    double temp=0;                                                      //++
    for(int i=0;i<n;++i){                                               //++
        if((data[i]-aver_fun)>=0){                                      //++
            temp = temp+(data[i]-aver_fun);                             //++
        }else{                                                          //++
            temp = temp+(aver_fun-data[i]);                             //++
        }                                                               //++
    }                                                                   //++返回：算术平均偏差
    return (temp/n);                                                    //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！！
            
            
            
double standard_error_function(double data[],int n){                    //++函数序号：11
    double aver_fun;                                                    //++作用：计算标准误差
    aver_fun = arithmetic_mean_function(data,n);                        //++需要：数字数组、数字个数
    double temp=0;                                                      //++函数支持：9
    for(int i=0;i<n;++i){                                               //++
        temp = temp+((data[i]-aver_fun)*(data[i]-aver_fun));            //++
    }                                                                   //++返回：标准误差
    return (sqrt((temp/n)));                                            //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！！
            
double standard_deviation_function(double data[],int n){                //++函数序号：12
    double aver_fun;                                                    //++作用：计算标准偏差
    aver_fun = arithmetic_mean_function(data,n);                        //++需要：数字数组、数字个数
    double temp=0;                                                      //++函数支持：9
    for(int i=0;i<n;++i){                                               //++
        temp = temp+((data[i]-aver_fun)*(data[i]-aver_fun));            //++
    }                                                                   //++返回：标准偏差
    return (sqrt((temp/(n-1))));                                        //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！！
           
double standard_deviation_of_arithmetic_mean_function(double data[],int n){      //++函数序号：13
    double aver_fun;                                                             //++作用：计算算数平均值的标准偏差
    aver_fun = arithmetic_mean_function(data,n);                                 //++需要：数字数组、数字个数
    double temp=0;                                                               //++函数支持：9
    for(int i=0;i<n;++i){                                                        //++
        temp = temp+((data[i]-aver_fun)*(data[i]-aver_fun));                     //++
    }                                                                            //++返回：算数平均值的标准偏差
    return (sqrt(temp/((n-1)*n)));                                               //++coded by fewoot
}                                                                                //++此函数截止到此！！！！！！！！！！！！！！！！！！！

int zifuchuan_to_shuzi_simple_function(int length,char shuru[]){        //++函数序号：14
    int sum=0;                                                          //++作用：将 “数字字符串”转换为 “数字”（简化）
    int temp=1;                                                         //++需要：字符串长度、字符串
    for(int i=(length-1);i>=0;--i){                                     //++
        sum = sum+(temp*(shuru[i]-'0'));                                //++另外：这个函数是简化的版本，规定字符串中无其他符号（包括负号）
        temp = temp*10;                                                 //++
    }                                                                   //++返回：换算后的数字
    return sum;                                                         //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！！

int output(list *start){                                                //++函数序号：15
    list *temp;                                                         //++作用：输出一个链表
    temp = start->next;                                                 //++需要：链表的初始指针
    for(int i=0;temp!=NULL;++i){                                        //++结构体支持：2
        printf("%s\n",temp->data);                                      //++另外：输出的格式为字符串
                                                                        //++宏定义支持：2、3
        temp = temp->next;                                              //++宏定义名词：Ok、Wrong
    }                                                                   //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

list *create_empty_function(int geshu){                                 //++函数序号：16
    list *start,*middle,*end;                                           //++作用：创建一个链表
    start = (list *)malloc(sizeof(list));                               //++需要：链表的长度（数据的个数）
    if(start=NULL){                                                     //++
        return Wrong;                                                   //++
    }                                                                   //++
    end = start;                                                        //++结构体支持：2
    for(int i=0;i<geshu;++i){                                           //++
        middle = (list *)malloc(sizeof(list));                          //++
        gets(middle->data);                                             //++另外：输入的格式是字符串
        end->next = middle;                                             //++宏定义支持：2、3
        end = middle;                                                   //++宏定义名词：Ok、Wrong
    }                                                                   //++
    end->next = NULL;                                                   //++返回：链表的初始指针/失败返回 -1
    return start;                                                       //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int add_function(int location,list *start,char shuru[]){                //++函数序号：17
    list *temp;                                                         //++作用：在链表的某个位置增添一个数据
    temp = start;                                                       //++需要：添加的位置（原数据位置后移）、链表的初始指针、增添数据
    for(int i=0;i<location-1;++i){                                      //++结构体支持：2
        temp = temp->next;                                              //++
    }                                                                   //++
    list *temp_1;                                                       //++另外：添加的数据是字符串
    temp_1 = (list *)malloc(sizeof(list));                              //++宏定义支持：2、3
    strcpy(temp_1->data,shuru);                                         //++宏定义名词：Ok、Wrong
    temp_1->next = temp->next;                                          //++
    temp->next = temp_1;                                                //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int delete_function(int location,list *start){                          //++函数序号：18                            
    list *temp,*temp_1;                                                 //++作用：删除链表中的某个数据
    temp = start;                                                       //++需要：数据的位置、链表的初始指针
    for(int i=0;i<location;++i){                                        //++结构体支持：2
        temp_1 = temp;                                                  //++
        temp = temp->next;                                              //++宏定义支持：2、3
    }                                                                   //++宏定义名词：Ok、Wrong
    temp_1->next = temp->next;                                          //++
    free(temp);                                                         //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int modify_function(int location,list *start,char shuru[]){             //++函数序号：19
    list *temp;                                                         //++作用：修改链表中的某个数据
    temp = start;                                                       //++需要：数据位置、链表的初始指针、修改的数据
    for(int i=0;i<location;++i){                                        //++结构体支持：2
        temp = temp->next;                                              //++另外：修改的数据是字符串
    }                                                                   //++宏定义支持：2、3
                                                                        //++宏定义名词：Ok、Wrong
    strcpy(temp->data,shuru);                                           //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int wipe_all_function(list *start){                                     //++函数序号：20                    
    list *temp,*temp_1;                                                 //++作用：清除所有链表
    temp = start->next;                                                 //++需要：链表的初始指针
    start->next = NULL;                                                 //++结构体支持：2
    for(int i=0;temp!=NULL;++i){                                        //++说明：此函数将会将初始指针之后的数据全部消除，并将start->所指向的地址变为NULL
        temp_1 = temp;                                                  //++另外：此函数不会清除链表的初始指针
        temp = temp->next;                                              //++宏定义支持：2、3
        free(temp_1);                                                   //++宏定义名词：Ok、Wrong
    }                                                                   //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int length_function(list *start){                                       //++函数序号：21
    list *temp;                                                         //++作用：计算链表的长度（数据个数）
    temp = start;                                                       //++需要：链表的初始指针
    int i=0;                                                            //++结构体支持：2
    for(;temp!=NULL;++i){                                               //++
        temp = temp->next;                                              //++
    }                                                                   //++返回：数据个数
    return (i-1);                                                       //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int find_function(list *start,char shuru[]){                            //++函数序号：22
    list *temp;                                                         //++作用：查找某个数据的位置
    temp = start;                                                       //++需要：链表的初始指针、查询的数据
    for(int i=0;temp!=NULL;++i){                                        //++结构体支持：2
        if(strcmp(shuru,temp->data)==0){                                //++
            return i;                                                   //++另外：查找数据时区分大小写
        }else{                                                          //++另外：查找的数据是字符串
            temp = temp->next;                                          //++另外：若查无此字符串会返回 0；
        }                                                               //++
    }                                                                   //++返回：字符串第一次出现的位置
    return 0;                                                           //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int delete_find_funciton(list *start,char shuru[]){                     //++函数序号：23
    for(int i=0;;){                                                     //++作用：删除所有指定的字符
        int location;                                                   //++需要：链表的初始指针、指定字符
        location = find_function(start,shuru);                          //++函数支持：22
        if(location==0){                                                //++结构体支持：2
            return;                                                     //++另外：检测的数据是字符串
        }else{                                                          //++函数支持：18
            delete_function(location,start);                            //++宏定义支持：2、3
        }                                                               //++宏定义名词：Ok、Wrong
    }                                                                   //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

stack *create_stack_function(){                                         //++函数序号：24
    stack *start;                                                       //++作用：创建链式栈
    start = (stack *)malloc(sizeof(stack));                             //++需要：无
    start->next = NULL;                                                 //++结构体支持：3
    start->last = start;                                                //++返回：栈的初始指针
    return start;                                                       //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int add_stack_function(stack *start,datatype shuru){                    //++函数序号：25
    stack *temp,*temp_1;                                                //++作用：添加数据入链式栈
    temp = start;                                                       //++需要：栈的初始指针
    temp_1 = (stack *)malloc(sizeof(stack));                            //++结构体支持：3
    for(;temp->next!=NULL;){                                            //++
        temp->last = temp_1;                                            //++
        temp = temp->next;                                              //++宏定义支持：1
    }                                                                   //++宏定义名词：datatype
    temp->last = temp_1;                                                //++
    temp->next = temp_1;                                                //++另外：目前不支持用宏传递字符串
    temp_1->data = shuru;                                               //++宏定义支持：2、3
    temp_1->next = NULL;                                                //++宏定义名词：Ok、Wrong
    temp_1->last = temp_1;                                              //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

datatype put_stack_function(stack *start){                              //++函数序号：26
    stack *temp,*temp_1;                                                //++作用：取出数据出链式栈
    temp = start;                                                       //++需要：栈的初始指针
    if(judge_empty_stack_function(start)==1){                           //++函数支持：28
        for(;temp->next!=NULL;){                                        //++结构体支持：3
            temp_1 = temp;                                              //++
            temp = temp->next;                                          //++
        }                                                               //++
        datatype temp_2;                                                //++宏定义支持：1
        temp_2 = temp->data;                                            //++宏定义名词：datatype
        free(temp);                                                     //++
        temp = start;                                                   //++
        temp_1->next = NULL;                                            //++
        for(;temp->next!=NULL;){                                        //++
            temp->last = temp_1;                                        //++
            temp = temp->next;                                          //++
        }                                                               //++
        start->last = temp_1;                                           //++
        return temp_2;                                                  //++
    }else{                                                              //++
        printf("error,it is empty");                                    //++另外：如果取出错误则返回 0
        return 0;                                                       //++返回：数据
    }                                                                   //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int length_stack_function(stack *start){                                //++函数序号：27
    stack *temp;                                                        //++作用：计算链式栈里的数据个数
    temp = start;                                                       //++需要：栈的初始指针
    int geshu=0;                                                        //++结构体支持：3
    for(;temp->next!=NULL;){                                            //++
        geshu++;                                                        //++
        temp = temp->next;                                              //++
    }                                                                   //++返回：个数
    return geshu;                                                       //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int judge_empty_stack_function(stack *start){                           //++函数序号：28
    if(start->last==start){                                             //++作用：判断是否为空链式栈
        return 0;                                                       //++需要：栈的初始指针
    }else{                                                              //++结构体支持：3
        return 1;                                                       //++返回：1（非空）、0（空）
    }                                                                   //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int wipeall_stack_function(stack *start){                               //++函数序号：29
    stack *temp,*temp_1;                                                //++作用：清除链式栈
    temp = start;                                                       //++需要：栈的初始指针
    temp = temp->next;                                                  //++结构体支持：3
    if(temp==0){                                                        //++
        return;                                                         //++
    }                                                                   //++
    for(;temp->next!=NULL;){                                            //++
        temp_1 = temp;                                                  //++
        temp = temp->next;                                              //++另外：此函数不会清除栈的初始指针
        free(temp_1);                                                   //++宏定义支持：2、3
    }                                                                   //++宏定义名词：Ok、Wrong
    free(temp);                                                         //++
    start->next = NULL;                                                 //++
    start->last = start;                                                //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int shuru_number_v2_function(datatype data[]){                          //++函数序号：30
    char temp;                                                          //++作用：输入任意个数字
    int i=0;                                                            //++需要：存储数字的数组
    do{                                                                 //++宏定义支持：1
        scanf("%d",&data[i++]);                                         //++宏定义名词：datatype
    }while((temp=getchar())!='\n');                                     //++返回：数字个数
    return i;                                                           //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int daxie_zhuan_xiaoxie_function(char shuru[]){                         //++函数序号：31
    int length = strlen(shuru);                                         //++作用：大写转换小写
    for(int i=0;i<length;++i){                                          //++需要：字符串
        if(shuru[i]<='Z' && shuru[i]>='A'){                             //++宏定义支持：2、3
            shuru[i] = (shuru[i]-'A')+'a';                              //++宏定义名词：Ok、Wrong
        }                                                               //++
    }                                                                   //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int shuzi_fengjie_function(int number,int shuzi[]){                     //++函数序号：32
    int temp=10;                                                        //++作用：将一个整数拆成单个数字
    int temp_1[1000];                                                   //++需要：整数、单个数字的数组
    int i=0;                                                            //++
    for(;number!=0;++i){                                                //++
        temp_1[i] = number%temp;                                        //++
        number = number/10;                                             //++
    }                                                                   //++
    int temp_3 = i;                                                     //++
    for(int n=0;n<temp_3;++n){                                          //++
        shuzi[n] = temp_1[(i--)-1];                                     //++
    }                                                                   //++返回：单个数字的个数
    return temp_3;                                                      //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int create_se_funtion(selist *start,int length) {                       //++函数序号：33
	start->data = (datatype *)malloc(length*(sizeof(datatype)));        //++作用：创建一个顺序表
	if (start->data == 0) {                                             //++需要：顺序表指针、总长度
		return Wrong;                                                   //++宏定义支持：1
	}                                                                   //++宏定义名词：datatype
	start->length_all = length;                                         //++结构体支持：4
                                                                        //++宏定义支持：2、3
                                                                        //++宏定义名词：Ok、Wrong
	start->length_now = 0;                                              //++返回：成功返回 1/失败返回 -1
	return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！
                                                              

int add_se_function(selist *start, datatype shuru, int location) {      //++函数序号：34
	if (start->length_now == start->length_all) {                       //++作用：添加数据
		return Wrong;                                                   //++需要：顺序表指针、数据、位置
	}else if(location>start->length_now){                               //++
		start->data[location-1] = shuru;                                //++宏定义支持：1
		start->length_now++;                                            //++宏定义名词：datatype
		return Ok;                                                      //++结构体支持：4
	}else{                                                              //++
		int i;                                                          //++
		for (i = start->length_now; i > location; --i) {                //++
			start->data[i] = start->data[i - 1];                        //++宏定义支持：2、3
		}                                                               //++宏定义名词：Ok、Wrong
		start->data[i] = shuru;                                         //++
		start->length_now++;                                            //++
		return Ok;                                                      //++返回：失败返回 -1/成功返回 1
	}                                                                   //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int delete_se_function(selist *start, int location) {                   //++函数序号：35
    if(location>start->length_now){                                     //++作用：删除数据
        return Wrong;                                                   //++需要：顺序表指针、位置
    }else{                                                              //++
        int i;                                                          //++宏定义支持：1
        for(i=location-1;i<start->length_now;++i){                      //++宏定义名词：datatype
            start->data[i] = start->data[i+1];                          //++结构体支持：4
        }                                                               //++宏定义支持：2、3
        start->length_now--;                                            //++宏定义名词：Ok、Wrong
        return Ok;                                                      //++返回：成功返回 1/失败返回 -1
    }                                                                   //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！


int wipe_se_function(selist *start){                                    //++函数序号：36
    free(start->data);                                                  //++作用：清除顺序表（保留顺序表指针）
    start->data = NULL;                                                 //++需要：顺序表指针
    start->length_all = 0;                                              //++结构体支持：4
                                                                        //++宏定义支持：2、3
                                                                        //++宏定义名词：Ok、Wrong
    start->length_now = 0;                                              //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int find_se_function(selist *start, datatype shuru){                    //++函数序号：37
    for(int i=0;i<start->length_now;++i){                               //++作用：查找数据位置
        if(start->data[i]==shuru){                                      //++需要：顺序表指针、数据
            return i+1;                                                 //++宏定义支持：1
        }                                                               //++宏定义名词：datatype
                                                                        //++结构体支持：4
                                                                        //++宏定义支持：2、3
                                                                        //++宏定义名词：Ok、Wrong
    }                                                                   //++返回：数据位置/失败返回 -1
    return Wrong;                                                       //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int output_se_function(selist *start){                                  //++函数序号：38
    for(int i=0;i<start->length_now;++i){                               //++作用：输出顺序表
        printf("%d\n",start->data[i]);                                  //++需要：顺序表指针
                                                                        //++另外：此处需要更改输出格式
                                                                        //++结构体支持：4
                                                                        //++宏定义支持：2、3
                                                                        //++宏定义名词：Ok、Wrong
    }                                                                   //++返回：成功返回 1
    return Ok;                                                          //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int modify_se_function(selist *start,int location,datatype shuru){      //++函数序号：39
    if(location>start->length_now){                                     //++作用：修改指定位置数据
        return Wrong;                                                   //++需要：顺序表指针、
    }else{                                                              //++宏定义支持：1
        start->data[location-1] = shuru;                                //++宏定义名词：datatype
                                                                        //++结构体支持：4
                                                                        //++宏定义支持：2、3
                                                                        //++宏定义名词：Ok、Wrong
        return Ok;                                                      //++返回：成功返回 1/失败返回 -1
    }                                                                   //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int create_se_stack_function(sestack *start,int length_all){            //++函数序号：40
    start->data = (datatype *)malloc(length_all*(sizeof(datatype)));    //++作用：创建顺序栈
                                                                        //++需要：顺序栈指针、栈数据总个数
    if(start->data==0){                                                 //++宏定义支持：1
        return Wrong;                                                   //++宏定义名词：datatype
    }else{                                                              //++结构体支持：5
        start->number_all = length_all;                                 //++宏定义支持：2、3
        start->number_now = 0;                                          //++宏定义名词：Ok、Wrong
        return Ok;                                                      //++返回：成功返回 1/失败返回 -1
    }                                                                   //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！


int add_se_stack_function(sestack *start,datatype shuru){               //++函数序号：41
    if(start->number_now==start->number_all){                           //++作用：入顺序栈
                                                                        //++需要：顺序栈指针、数据
        return Wrong;                                                   //++宏定义支持：1
                                                                        //++另外：顺序栈有长度限制，超过则入栈失败
    }else{                                                              //++宏定义名词：datatype
        start->data[start->number_now] = shuru;                         //++结构体支持：5
        start->number_now++;                                            //++宏定义支持：2、3
        return Ok;                                                      //++宏定义名词：Ok、Wrong
                                                                        //++返回：成功返回 1/失败返回 -1
    }                                                                   //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！


datatype put_se_stack_function(sestack *start){                         //++函数序号：42
                                                                        //++作用：出顺序栈
                                                                        //++需要：顺序栈指针
    if(start->number_now==0){                                           //++宏定义支持：1
        return Wrong;                                                   //++宏定义名词：datatype
    }else{                                                              //++宏定义支持：2、3
        start->number_now--;                                            //++结构体支持：5
        return (start->data[(start->number_now)]);                      //++宏定义名词：Ok、Wrong
                                                                        //++返回：成功返回数据/失败返回 -1
    }                                                                   //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！


int length_se_stack_function(sestack *start){                           //++函数序号：43
                                                                        //++作用：计算顺序栈长度
                                                                        //++需要：顺序栈指针
    return start->number_now;                                           //++结构体支持：5
                                                                        //++返回：数据个数
                                                                        //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int judge_se_stack_function(sestack *start){                            //++函数序号：44
    if(start->number_now==0){                                           //++作用：判断栈是否为空
        return Wrong;                                                   //++需要：顺序栈指针
    }else{                                                              //++结构体支持：5
        return Ok;                                                      //++宏定义支持：2、3
    }                                                                   //++宏定义名词：Ok、Wrong
                                                                        //++返回：成功返回 1/失败返回 -1
                                                                        //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int wipe_se_stack_function(sestack *start){                             //++函数序号：45
    free(start->data);                                                  //++作用：清除顺序栈
                                                                        //++需要：顺序栈指针
    start->number_now = 0;                                              //++结构体支持：5
    return Ok;                                                          //++宏定义支持：2、3
                                                                        //++宏定义名词：Ok、Wrong
                                                                        //++另外：此函数不会清除顺序栈的初始指针
                                                                        //++返回：成功返回 1
                                                                        //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

//最后修改于2019/5/21