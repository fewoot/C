#include <stdio.h>
#include <string.h>
struct data
{
    int number;
};


int main()
{
    int geshu;
    scanf("%d",&geshu);
    struct data person[6000];
    struct data temp[6000];
    for(int i=1;i<=geshu;++i){
        person[i].number = i;
    }
    int temp_1=0;
    for(;geshu>3;){
        if(temp_1==0){
            int n=1;
            for(int i=0;i<=geshu;++i){
                
                if((i%2)!=0){
                    temp[n] = person[i];
                    n++;
                }
            }
            geshu = (geshu/2)+(geshu%2);
            temp_1 = 1;
        }else{
            int n=1;
            for(int i=0;i<=geshu;++i){
                
                if((i%3)!=0){
                    person[n] = temp[i];
                    n++;
                }
            }
            geshu = (geshu%3)+(2*(geshu/3));
            temp_1 = 0;
        }
    }
    if(temp_1==0){
        printf("%d",person[1].number);
        for(int i=2;i<=geshu;++i){
            printf(" %d",person[i].number);
        }
    }else{
        printf("%d",temp[1].number);
        for(int i=2;i<=geshu;++i){
            printf(" %d",temp[i].number);
        }
    }

    //gets();
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}