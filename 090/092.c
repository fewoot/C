#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct A{                                                               //++结构体序号：2
    char data;                                                            //++包含：字符串、指向下一数据的指针
                                                                                //++另外：此结构体构建了一个新的类型：list
    struct A *next;                                                             //++coded by fewoot
} list;                                                                         //++此结构体截止到此！！！！！！！！！！！！！！！！！

void output(list *start);                                                               //     输出全部数据         (15)
list *create_empty_function(int geshu);                                                 //     创建链表             (16)
void add_function(int location,list *start,char shuru);                               //     添加数据             (17)
void delete_function(int location,list *start);                                         //     删除数据             (18)
void modify_function(int location,list *start,char shuru[]);                            //     修改数据             (19)
void wipe_all_function(list *start);                                                    //     清空数据             (20)
int length_function(list *start);                                                       //     计算个数             (21)
int find_function(list *start,char shuru[]);                                            //     查找数据位置         (22)
void delete_find_funciton(list *start,char shuru[]);                                    //     删除所有指定字符数据 (23)
int main()
{
    char shuru[81];
    //scanf("",&);
    gets(shuru);
    //fflush(stdin);
    list *start;
    start = create_empty_function(0);
    for(int i=0;i<(strlen(shuru));++i){
        add_function(i,start,shuru[i]);
    }
    for(int i=(strlen(shuru)-1);i>=0;--i){
        if(shuru[i]<='z' && shuru[i]>='a'){

        }else{
            delete_function(i+1,start);
        }
        
    }
    output(start);
    wipe_all_function(start);
    free(start);

    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}


void output(list *start){                                               //++函数序号：15
    list *temp;                                                         //++作用：输出一个链表
    temp = start->next;                                                 //++需要：链表的初始指针
    for(int i=0;temp!=NULL;++i){                                        //++结构体支持：2
        printf("%c",temp->data);                                      //++另外：输出的格式为字符串
        temp = temp->next;                                              //++
    }                                                                   //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

list *create_empty_function(int geshu){                                 //++函数序号：16
    list *start,*middle,*end;                                           //++作用：创建一个链表
    start = (list *)malloc(sizeof(list));                               //++需要：链表的长度（数据的个数）
    end = start;                                                        //++结构体支持：2
    for(int i=0;i<geshu;++i){                                           //++
        middle = (list *)malloc(sizeof(list));                          //++
        gets(middle->data);                                             //++另外：输入的格式是字符串
        end->next = middle;                                             //++
        end = middle;                                                   //++
    }                                                                   //++
    end->next = NULL;                                                   //++返回：链表的初始指针
    return start;                                                       //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

void add_function(int location,list *start,char shuru){               //++函数序号：17
    list *temp;                                                         //++作用：在链表的某个位置增添一个数据
    temp = start;                                                       //++需要：添加位置（在此位置后面添加）、链表的初始指针、增添数据
    for(int i=0;i<location;++i){                                        //++结构体支持：2
        temp = temp->next;                                              //++
    }                                                                   //++
    list *temp_1;                                                       //++另外：添加的数据是字符串
    temp_1 = (list *)malloc(sizeof(list));                              //++
    //strcpy(temp_1->data,shuru);                                         //++
    temp_1->data = shuru;
    temp_1->next = temp->next;                                          //++
    temp->next = temp_1;                                                //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

void delete_function(int location,list *start){                         //++函数序号：18                            
    list *temp,*temp_1;                                                 //++作用：删除链表中的某个数据
    temp = start;                                                       //++需要：数据的位置、链表的初始指针
    for(int i=0;i<location;++i){                                        //++结构体支持：2
        temp_1 = temp;                                                  //++
        temp = temp->next;                                              //++
    }                                                                   //++
    temp_1->next = temp->next;                                          //++
    free(temp);                                                         //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

void modify_function(int location,list *start,char shuru[]){            //++函数序号：19
    list *temp;                                                         //++作用：修改链表中的某个数据
    temp = start;                                                       //++需要：数据位置、链表的初始指针、修改的数据
    for(int i=0;i<location;++i){                                        //++结构体支持：2
        temp = temp->next;                                              //++
    }                                                                   //++另外：修改的数据是字符串
    strcpy(temp->data,shuru);                                           //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

void wipe_all_function(list *start){                                    //++函数序号：20                    
    list *temp,*temp_1;                                                 //++作用：清除所有链表
    temp = start->next;                                                 //++需要：链表的初始指针
    start->next = NULL;                                                 //++结构体支持：2
    for(int i=0;temp!=NULL;++i){                                        //++说明：此函数将会将初始指针之后的数据全部消除，并将start->所指向的地址变为NULL
        temp_1 = temp;                                                  //++
        temp = temp->next;                                              //++另外：此函数不会清除链表的初始指针
        free(temp_1);                                                   //++
    }                                                                   //++返回：无
    return;                                                             //++coded by fewoot
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

void delete_find_funciton(list *start,char shuru[]){                    //++函数序号：23
    for(int i=0;;){                                                     //++作用：删除所有指定的字符
        int location;                                                   //++需要：链表的初始指针、指定字符
        location = find_function(start,shuru);                          //++函数支持：22
        if(location==0){                                                //++结构体支持：2
            return;                                                     //++另外：检测的数据是字符串
        }else{                                                          //++
            delete_function(location,start);                            //++函数支持：18
        }                                                               //++
    }                                                                   //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！
