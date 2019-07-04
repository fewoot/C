#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct A{                                                               //++结构体序号：2
    char data;                                                            //++包含：字符串、指向下一数据的指针
                                                                                //++另外：此结构体构建了一个新的类型：list
    struct A *next;                                                             //++coded by fewoot
} list;

list *create_empty_function();
int length_function(list *start);
void delete_find_funciton(list *start,char shuru);
void output(list *start);
int find_function(list *start,char shuru);
void delete_function(int location,list *start);

int main()
{
    list *start;
    start = create_empty_function();
    char shuru;
    scanf("%c",&shuru);
    output(start);
    printf("%d\n",length_function(start));
    delete_find_funciton(start,shuru);
    output(start);
    printf("%d",length_function(start));
    //scanf("",&);
    //gets();
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}

list *create_empty_function(){                                //++函数序号：16
    list *start,*middle,*end;                                          //++作用：创建一个链表
    start = (list *)malloc(sizeof(list));                              //++需要：链表的长度（数据的个数）
    end = start;                                                       //++另外：此函数需要结构体：2
    for(int i=0;end->data!='\n';++i){                                          //++
        middle = (list *)malloc(sizeof(list));                         //++
        scanf("%c",&(middle->data));                                            //++
        end->next = middle;                                            //++
        end = middle;                                                  //++
    }                                                                  //++
    end->next = NULL;                                                  //++返回：链表的初始指针
    return start;                                                      //++coded by fewoot
}

void output(list *start){                                              //++函数序号：15
    list *temp;                                                        //++作用：输出一个链表
    temp = start->next;                                                //++需要：链表的初始指针
    for(int i=0;temp!=NULL;++i){                                       //++另外：此函数需要结构体：2
        printf("%c",temp->data);                                     //++
        temp = temp->next;                                             //++
    }                                                                  //++返回：无
    return;                                                            //++coded by fewoot
}

int length_function(list *start){                                      //++函数序号：21
    list *temp;                                                        //++作用：计算链表的长度（数据个数）
    temp = start;                                                      //++需要：链表的初始指针
    int i=0;                                                           //++另外：此函数需要结构体：2
    for(;temp!=NULL;++i){                                              //++
        temp = temp->next;                                             //++
    }                                                                  //++返回：数据个数
    return (i-2);                                                      //++coded by fewoot
}

void delete_find_funciton(list *start,char shuru){                   //++函数序号：23
    for(int i=0;;){                                                    //++作用：删除所有指定的字符
        int location;                                                  //++需要：链表的初始指针、指定字符
        location = find_function(start,shuru);                         //++调用：函数：22
        if(location==0){                                               //++
            return;                                                    //++
        }else{                                                         //++
            delete_function(location,start);                           //++调用：函数：18
        }                                                              //++
    }                                                                  //++返回：无
    return;                                                            //++coded by fewoot
}

void delete_function(int location,list *start){                        //++函数序号：18                            
    list *temp,*temp_1;                                                //++作用：删除链表中的某个数据
    temp = start;                                                      //++需要：数据的位置、链表的初始指针
    for(int i=0;i<location;++i){                                       //++另外：此函数需要结构体：2
        temp_1 = temp;                                                 //++
        temp = temp->next;                                             //++
    }                                                                  //++
    temp_1->next = temp->next;                                         //++
    free(temp);                                                        //++返回：无
    return;                                                            //++coded by fewoot
}

int find_function(list *start,char shuru){                           //++函数序号：22
    list *temp;                                                        //++作用：查找某个数据的位置
    temp = start;                                                      //++需要：链表的初始指针、查询的数据
    for(int i=0;temp!=NULL;++i){                                       //++另外：此函数需要结构体：2
        if(temp->data==shuru){                               //++
            return i;                                                  //++另外：查找数据时区分大小写
        }else{                                                         //++
            temp = temp->next;                                         //++说明：若查无此字符串会返回 0；
        }                                                              //++
    }                                                                  //++返回：字符串第一次出现的位置
    return 0;                                                          //++coded by fewoot
}