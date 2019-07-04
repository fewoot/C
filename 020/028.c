#include <stdio.h>

int main()
{
    int n,yue;
    scanf("%d,%d",&n,&yue);
    if(1==yue||3==yue||5==yue||7==yue||8==yue||10==yue||12==yue){
        printf("31");
    }else if(4==yue||6==yue||9==yue||11==yue){
        printf("30");
    }else if(2==yue){
        if(0==(n%100)){
            if(0==(n%400)){
                printf("29");
            }
            printf("28");
        }else{  
            if(0==(n%4)){
                printf("29");
            }else{
                printf("28");
            }
        
        }
    }




    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}