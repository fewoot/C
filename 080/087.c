#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct A{                                                               //++结构体序号：2
    int data;                                                            //++包含：字符串、指向下一数据的指针
                                                                                //++另外：此结构体构建了一个新的类型：list
    struct A *next;                                                             //++coded by fewoot
} list;   

list *create_empty_function(int geshu);
list *create_f(int temp);                          
void add_function(int location,list *start,int shuru);        
void delete_function(int location,list *start);                  
void modify_function(int location,list *start,int shuru);     
void wipe_all_function(list *start);                             
int length_function(list *start);                                
int find_function(list *start,int shuru);                     
void output(list *start);                                        
void delete_find_funciton(list *start,int shuru);                     

int main()
{

    list *start1,*start2;
    start1 = create_f(1);
    for(int temp=2;temp<=10;++temp){
        add_function(temp-1,start1,temp);
    }
    start2 = create_empty_function(0);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int temp;
        scanf("%d",&temp);
        add_function(i,start2,temp);
    }
    int weizhi;
    scanf("%d",&weizhi);
    list *start_1,*start_2,*start_3=start1;
    start_1 = start2->next;
    start_2 = start2;
    for(;start_2->next!=NULL;){
        start_2 = start_2->next;
    }
    for(int i=0;i<weizhi;++i){
        start_3 = start_3->next;
    }
    start_2->next = start_3->next;
    start_3->next = start_1;
    start1 = start1->next;
    printf("%d",start1->data);
    output(start1);

    //scanf("",&);
    //gets();
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    //system("pause");
    return 0;
}

list *create_f(int temp){
    list *start,*middle,*end;                                           //++作用：创建一个链表
    start = (list *)malloc(sizeof(list));                               //++需要：链表的长度（数据的个数）
    end = start;                                                        //++结构体支持：结构体：2
                                               //++
        middle = (list *)malloc(sizeof(list));                          //++
        //gets(middle->data);  
        middle->data = temp;                                           //++
        end->next = middle;                                             //++
        end = middle;                                                   //++
                                                                       //++
    end->next = NULL;                                                   //++返回：链表的初始指针
    return start;
}

void output(list *start){                                               //++函数序号：15
    list *temp;                                                         //++作用：输出一个链表
    temp = start->next;                                                 //++需要：链表的初始指针
    for(int i=0;temp!=NULL;++i){                                        //++结构体支持：结构体：2
        printf(" %d",temp->data);                                      //++
        temp = temp->next;                                              //++
    }                                                                   //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

list *create_empty_function(int geshu){                                 //++函数序号：16
    list *start,*middle,*end;                                           //++作用：创建一个链表
    start = (list *)malloc(sizeof(list));                               //++需要：链表的长度（数据的个数）
    end = start;                                                        //++结构体支持：结构体：2
    for(int i=0;i<geshu;++i){                                           //++
        middle = (list *)malloc(sizeof(list));                          //++
        scanf("%d",middle->data);                                             //++
        end->next = middle;                                             //++
        end = middle;                                                   //++
    }                                                                   //++
    end->next = NULL;                                                   //++返回：链表的初始指针
    return start;                                                       //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

void add_function(int location,list *start,int shuru){               //++函数序号：17
    list *temp;                                                         //++作用：在链表的某个位置增添一个数据
    temp = start;                                                       //++需要：添加位置（在此位置后面添加）、链表的初始指针、增添数据
    for(int i=0;i<location;++i){                                        //++结构体支持：结构体：2
        temp = temp->next;                                              //++
    }                                                                   //++
    list *temp_1;                                                       //++
    temp_1 = (list *)malloc(sizeof(list));                              //++
    temp_1->data=shuru;                                         //++
    temp_1->next = temp->next;                                          //++
    temp->next = temp_1;                                                //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

void delete_function(int location,list *start){                         //++函数序号：18                            
    list *temp,*temp_1;                                                 //++作用：删除链表中的某个数据
    temp = start;                                                       //++需要：数据的位置、链表的初始指针
    for(int i=0;i<location;++i){                                        //++结构体支持：结构体：2
        temp_1 = temp;                                                  //++
        temp = temp->next;                                              //++
    }                                                                   //++
    temp_1->next = temp->next;                                          //++
    free(temp);                                                         //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

// void modify_function(int location,list *start,int shuru){            //++函数序号：19
//     list *temp;                                                         //++作用：修改链表中的某个数据
//     temp = start;                                                       //++需要：数据位置、链表的初始指针、修改的数据
//     for(int i=0;i<location;++i){                                        //++结构体支持：结构体：2
//         temp = temp->next;                                              //++
//     }                                                                   //++
//     strcpy(temp->data,shuru);                                           //++返回：无
//     return;                                                             //++coded by fewoot
// }                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

void wipe_all_function(list *start){                                    //++函数序号：20                    
    list *temp,*temp_1;                                                 //++作用：清除所有链表
    temp = start->next;                                                 //++需要：链表的初始指针
    start->next = NULL;                                                 //++结构体支持：结构体：2
    for(int i=0;temp!=NULL;++i){                                        //++说明：此函数将会将初始指针之后的数据全部消除，并将start->所指向的地址变为NULL
        temp_1 = temp;                                                  //++
        temp = temp->next;                                              //++
        free(temp_1);                                                   //++
    }                                                                   //++返回：无
    return;                                                             //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

int length_function(list *start){                                       //++函数序号：21
    list *temp;                                                         //++作用：计算链表的长度（数据个数）
    temp = start;                                                       //++需要：链表的初始指针
    int i=0;                                                            //++结构体支持：结构体：2
    for(;temp!=NULL;++i){                                               //++
        temp = temp->next;                                              //++
    }                                                                   //++返回：数据个数
    return (i-1);                                                       //++coded by fewoot
}                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

// int find_function(list *start,int shuru){                            //++函数序号：22
//     list *temp;                                                         //++作用：查找某个数据的位置
//     temp = start;                                                       //++需要：链表的初始指针、查询的数据
//     for(int i=0;temp!=NULL;++i){                                        //++结构体支持：结构体：2
//         if(strcmp(shuru,temp->data)==0){                                //++
//             return i;                                                   //++另外：查找数据时区分大小写
//         }else{                                                          //++
//             temp = temp->next;                                          //++说明：若查无此字符串会返回 0；
//         }                                                               //++
//     }                                                                   //++返回：字符串第一次出现的位置
//     return 0;                                                           //++coded by fewoot
// }                                                                       //++此函数截止到此！！！！！！！！！！！！！！！！！！

// void delete_find_funciton(list *start,int shuru){                    //++函数序号：23
//     for(int i=0;;){                                                     //++作用：删除所有指定的字符
//         int location;                                                   //++需要：链表的初始指针、指定字符
//         location = find_function(start,shuru);                          //++调用：函数：22
//         if(location==0){                                                //++结构体支持：结构体：2
//             return;                                                     //++
//         }else{                                                          //++
//             delete_function(location,start);                            //++调用：函数：18
//         }                                                               //++
//     }                                                                   //++返回：无
//     return;                                                             //++coded by fewoot
// }               
