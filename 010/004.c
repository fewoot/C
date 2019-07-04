#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    //printf("%x\n",a);
    int weishu_int[45],tem,i=-1;
    char weishu_char[45];
    do{
        i++;
        tem = a%16;
        if(tem==10){
            weishu_char[i] = 'A';
            weishu_int[i] = 17;
            i++;
        }else if(tem==11){
            weishu_char[i] = 'B';
            weishu_int[i] = 17;
            i++;
        }else if(tem==12){
            weishu_char[i] = 'C';
            weishu_int[i] = 17;
            i++;
        }else if(tem==13){
            weishu_char[i] = 'D';
            weishu_int[i] = 17;
            i++;
        }else if(tem==14){
            weishu_char[i] = 'E';
            weishu_int[i] = 17;
            i++;
        }else if(tem==15){
            weishu_char[i] = 'F';
            weishu_int[i] = 17;
            i++;
        }else{
            weishu_int[i] = tem;
            i++;
        }
        a = a/16;

    }while(a!=0);
    i--;

    for(tem=i-4;i>tem;){
    if(weishu_int[i]==17){
        printf("%c",weishu_char[i]);
        i--;
    }else{
        printf("%c",weishu_int[i]);
        i--;
    }
    }

    for(int n=0;n<=3;n++){
        if(weishu_int[n]==17){
        printf("%c",weishu_char[n]);

    }else{
        printf("%c",weishu_int[n]);

    }
    }


    //It is base code,under this
    system("pause");
    return 0;
}