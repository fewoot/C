#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

// void Bubble(int *a,int n){
//     for(int temp=1;temp!=0;){
//         temp=0;
//         for(int i=0;i<n;++i){
//             if(a[i]>a[(n+1)]){
//                 int temp_1;
//                 temp_1 = a[i];
//                 a[i] = a[(n+1)];
//                 a[(n+1)] = temp_1;
//                 temp++;
//             }
//         }
//     }
// }


// int main()
// {
//     int geshu;
//     scanf("%d",&geshu);
//     int *zhizheng = (int *)calloc(geshu,sizeof(int));
//     for(int i=0 ; i < geshu ; i++ ) 
//     {
//         scanf("%d",&zhizheng[i]);
//     }

//     // gets();
//     // fflush(stdin);
//     // int *p=(int *)calloc(m,sizeof(int));
//     Bubble(zhizheng,geshu);
//     for(int i=0;i<geshu;++i){
//         printf("%d",zhizheng[i]);
//     }
void paixu_from_xiao(int length,int shuru[]){           //从小到大排序，输入 length：数组的个数 and 数组；
    
    for(int temp=1;temp!=0;){
        temp = 0;
        for(int i=0;i<(length-1);++i){
            int temp_1;
            if(shuru[i]>shuru[(i+1)]){
                temp_1 = shuru[i];
                shuru[i] = shuru[(i+1)];
                shuru[(i+1)] = temp_1;
                temp++;
            }
        }
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int shuru[n];
    for(int i=0;i<n;++i){
        scanf("%d",&shuru[i]);
    }
    paixu_from_xiao(n,&shuru);
    printf("%d",shuru[0]);
    for(int i=1;i<n;++i){
        printf(" %d",shuru[i]);
    }


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}
