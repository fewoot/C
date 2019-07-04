#include <stdio.h>
#include <string.h>

struct zuhe
{
    char zimu;
    int cishu;
    /* data */
};

void jishu(int longth,char *shuru,int *number){
    for(int i=0;i<=longth;++i){
        if(shuru[i]=='a' || shuru[i]=='A'){
            number[0]++;
        }else if(shuru[i]=='b' || shuru[i]=='B'){
            number[1]++;
        }else if(shuru[i]=='c' || shuru[i]=='C'){
            number[2]++;
        }else if(shuru[i]=='d' || shuru[i]=='D'){
            number[3]++;
        }else if(shuru[i]=='e' || shuru[i]=='E'){
            number[4]++;
        }else if(shuru[i]=='f' || shuru[i]=='F'){
            number[5]++;
        }else if(shuru[i]=='g' || shuru[i]=='G'){
            number[6]++;
        }else if(shuru[i]=='h' || shuru[i]=='H'){
            number[7]++;
        }else if(shuru[i]=='i' || shuru[i]=='I'){
            number[8]++;
        }else if(shuru[i]=='j' || shuru[i]=='J'){
            number[9]++;
        }else if(shuru[i]=='k' || shuru[i]=='K'){
            number[10]++;
        }else if(shuru[i]=='l' || shuru[i]=='L'){
            number[11]++;
        }else if(shuru[i]=='m' || shuru[i]=='M'){
            number[12]++;
        }else if(shuru[i]=='n' || shuru[i]=='N'){
            number[13]++;
        }else if(shuru[i]=='o' || shuru[i]=='O'){
            number[14]++;
        }else if(shuru[i]=='p' || shuru[i]=='P'){
            number[15]++;
        }else if(shuru[i]=='q' || shuru[i]=='Q'){
            number[16]++;
        }else if(shuru[i]=='r' || shuru[i]=='R'){
            number[17]++;
        }else if(shuru[i]=='s' || shuru[i]=='S'){
            number[18]++;
        }else if(shuru[i]=='t' || shuru[i]=='T'){
            number[19]++;
        }else if(shuru[i]=='u' || shuru[i]=='U'){
            number[20]++;
        }else if(shuru[i]=='v' || shuru[i]=='V'){
            number[21]++;
        }else if(shuru[i]=='w' || shuru[i]=='W'){
            number[22]++;
        }else if(shuru[i]=='x' || shuru[i]=='X'){
            number[23]++;
        }else if(shuru[i]=='y' || shuru[i]=='Y'){
            number[24]++;
        }else if(shuru[i]=='z' || shuru[i]=='Z'){
            number[25]++;
        }
    }
}

// void paixu(struct A *a[]){
//     char temp_zimu;
//     int temp_cishu;
//     for(int temp=1;temp!=0;){
//         temp = 0;
//         for(int i=0;i<25;++i){
//             if(a[i]->cishu < a[(i+1)]->cishu){
//                 temp_cishu = a[i]->cishu;
//                 temp_zimu = a[i]->zimu;
//                 a[i] = a[(i+1)];
//                 a[(i+1)]->cishu = temp_cishu;
//                 a[(i+1)]->zimu = temp_zimu;
//                 temp++;
//             }
//         }
//     }
// }

void paixu(struct zuhe jihe[]){
    struct zuhe temp;
    int temp_1=0;
    for(temp_1=1;temp_1!=0;){
        temp_1 = 0;
        for(int i=0;i<25;++i){
            if(jihe[i].cishu<jihe[(i+1)].cishu){
                temp = jihe[i];
                jihe[i] = jihe[(i+1)];
                jihe[(i+1)] = temp;
                temp_1++;
            }
        }
    }
}

int main()
{
    char shuru[81];
    int number[26];
    int longth;
    for(int i=0;i<=25;i++){
        number[i] = 0;
    }
    
    //scanf("",&);
    gets(shuru);
    longth = strlen(shuru);
    //fflush(stdin);
    jishu(longth,&shuru,&number);
    // for(int i=0;i<=25;i++){
    //     printf("%d = %d\n",i,number[i]);
    // }                                       //输入已搞定，每一个number对应字母个数，longth为输入的长度。
    struct zuhe jihe[26];
    for(int i=0;i<=25;++i){
        jihe[i].zimu = 'A'+i;
        jihe[i].cishu = number[i];
    }
    for(int i=0;i<=25;++i){
        //printf("%c-%d\n",jihe[i].zimu,jihe[i].cishu);
    }
    paixu(&jihe);
    //printf("after function\n");
    printf("%c-%d",jihe[0].zimu,jihe[0].cishu);
    for(int i=1;i<=25;++i){
        printf(" %c-%d",jihe[i].zimu,jihe[i].cishu);
    }
    // struct zuhe test;
    // test = jihe[0];
    // printf("%c-%d",test.zimu,test.cishu);


    // struct A a[26];
    // for(int i=0;i<=25;++i){
    //     a[i].zimu = 'A'+i;
    //     a[i].cishu = number[i];
    // }
    // printf("%d\n%c",a[2].cishu,a[3].zimu);
    // paixu(&a);
    // for(int i=0;i<=25;++i){
    //     printf("%c-%d\n",a[i].zimu,a[i].cishu);
    // }

    
    



    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}