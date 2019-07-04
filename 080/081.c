#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef int datatype;

typedef struct B{                                                               //++结构体序号：3
    datatype data;                                                              //++包含：特定类型数据、指向下一项的指针、最后一个数据的指针
    struct B *next;                                                             //++另外：此结构体构建了一个新的类型：stack
    struct B *last;                                                             //++coded by fewoot
}stack;

stack *create_stack_function();
void add_stack_function(stack *start,datatype shuru);
int length_stack_function(stack *start);
void wipeall_stack_function(stack *start);


int main()
{
    int shuru,yushu=1;
    scanf("%d",&shuru);
    stack *start;
    start = create_stack_function();
    
    //gets();
    //fflush(stdin);
    for(;shuru>=2;){
        yushu = shuru%2;
        add_stack_function(start,yushu);
        shuru = shuru/2;
    }
    add_stack_function(start,shuru);
    int length;
    length = length_stack_function(start);
    printf("表长：");
    printf("%d\n",length);
    int data[1000];
    stack *temp;
        temp = start->next;
    for(int i=0;i<length;++i){
        
        data[i] = temp->data;
        temp = temp->next;
    }
    printf("二进制：");
    for(int i=(length)-1;i>=0;--i){
        printf("%d",data[i]);
    }
    



    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

stack *create_stack_function(){                                         //++函数序号：24
    stack *start;                                                       //++作用：创建栈
    start = (stack *)malloc(sizeof(stack));                             //++需要：无
    start->next = NULL;                                                 //++结构体支持：结构体：3
    start->last = start;                                                //++返回：栈的初始指针
    return start;                                                       //++coded by fewoot
}

void add_stack_function(stack *start,datatype shuru){                   //++函数序号：25
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

void wipeall_stack_function(stack *start){                              //++函数序号：29
    stack *temp,*temp_1;                                                //++作用：清除栈
    temp = start;                                                       //++需要：栈的初始指针
    temp = temp->next;                                                  //++结构体支持：结构体：3
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