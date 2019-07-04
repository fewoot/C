#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef char datatype;

typedef struct B{                                                               //++结构体序号：3
    datatype data;                                                              //++包含：特定类型数据、指向下一项的指针、最后一个数据的指针
    struct B *next;                                                             //++另外：此结构体构建了一个新的类型：stack
    struct B *last;                                                             //++coded by fewoot
}stack;

stack *create_stack_function();//
void wipeall_stack_function(stack *start);//
void add_stack_function(stack *start,datatype shuru);//change
datatype put_stack_function(stack *start); //          
int judge_empty_stack_function(stack *start);//empty=0;or1//
int length_stack_function(stack *start); 





int main()
{
    char shuru[1000];
    //scanf("",&);
    gets(shuru);
    int length=strlen(shuru);
    stack *start;
    start = create_stack_function();
    int temp1=1;
    for(int i=0;i<length;++i){
        if(shuru[i]=='('){
            add_stack_function(start,shuru[i]);
        }else if(shuru[i]==')'){
            int temp=1;
            temp = put_stack_function(start);
            if(temp==0){
                //printf("括号不匹配！");
                i=length; 
                temp1=0;           
            }
        }
    }
    int geshu;
    geshu = length_stack_function(start);
    if(geshu==0 && temp1!=0){
        printf("括号匹配！");
    }else{
        printf("括号不匹配！");
    }

    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    wipeall_stack_function(start);
    return 0;
}

stack *create_stack_function(){                                         //++函数序号：24
    stack *start;                                                       //++作用：创建栈
    start = (stack *)malloc(sizeof(stack));                             //++需要：无
    start->next = NULL;                                                 //++结构体支持：结构体：3
    start->last = start;                                                //++返回：栈的初始指针
    return start;                                                       //++coded by fewoot
}

void wipeall_stack_function(stack *start){                              //++函数序号：29
    stack *temp,*temp_1;                                                //++作用：清除栈
    temp = start;                                                       //++需要：栈的初始指针
    temp = temp->next;    
        if(temp==0){
        return;
    }                                              //++结构体支持：结构体：3
    for(;temp->next!=NULL;){                                            //++
        temp_1 = temp;                                                  //++
        temp = temp->next;                                              //++另外：此函数不会清除栈的初始指针
        free(temp_1);                                                   //++
    }                                                                   //++
    free(temp);                                                         //++
    start->next = NULL;                                                 //++
    start->last = start;                                                //++返回：无
    return;                                                             //++coded by fewoot
} 

void add_stack_function(stack *start,char shuru){                   //++函数序号：25
    stack *temp,*temp_1;                                                //++作用：添加数据入栈
    temp = start;                                                       //++需要：栈的初始指针
    temp_1 = (stack *)malloc(sizeof(stack));                            //++结构体支持：结构体：3
    for(;temp->next!=NULL;){                                            //++
        temp->last = temp_1;                                            //++
        temp = temp->next;                                              //++宏定义支持：宏定义：1
    }                                                                   //++宏定义名词：datatype
    temp->last = temp_1;                                                //++
    temp->next = temp_1;                                                //++另外：目前不支持用宏传递字符串
    temp_1->data = shuru;                                               //++
    temp_1->next = NULL;                                                //++
    temp_1->last = temp_1;                                              //++返回：无
    return;                                                             //++coded by fewoot
}

datatype put_stack_function(stack *start){                              //++函数序号：26
    stack *temp,*temp_1;                                                //++作用：取出数据出栈
    temp = start;                                                       //++需要：栈的初始指针
    if(judge_empty_stack_function(start)==1){                           //++调用：函数：28
        for(;temp->next!=NULL;){                                        //++结构体支持：结构体：3
            temp_1 = temp;                                              //++
            temp = temp->next;                                          //++
        }                                                               //++
        datatype temp_2;                                                //++宏定义支持：宏定义：1
        temp_2 = temp->data;                                            //++宏定义名词：datatype
        free(temp);                                                     //++
        temp = start;                                                   //++
        temp_1->next = NULL;                                            //++
        start->last = temp_1;
        for(;temp->next!=NULL;){                                        //++
            temp->last = temp_1;                                        //++
            temp = temp->next;                                          //++
        }                                                               //++
        return temp_2;                                                  //++
    }else{                                                              //++
        //printf("error,it is empty");                                    //++
        return 0;                                                       //++返回：数据
    }                                                                   //++coded by fewoot
}

int judge_empty_stack_function(stack *start){                           //++函数序号：28
    if(start->last==start){                                             //++作用：判断是否为空栈
        return 0;                                                       //++需要：栈的初始指针
    }else{                                                              //++结构体支持：结构体：3
        return 1;                                                       //++返回：1（非空）、0（空）
    }                                                                   //++coded by fewoot
}

int length_stack_function(stack *start){                                //++函数序号：27
    stack *temp;                                                        //++作用：计算栈里的数据个数
    temp = start;                                                       //++需要：栈的初始指针
    int geshu=0;                                                        //++结构体支持：结构体：3
    for(;temp->next!=NULL;){                                            //++
        geshu++;                                                        //++
        temp = temp->next;                                              //++
    }                                                                   //++返回：个数
    return geshu;                                                       //++coded by fewoot
}