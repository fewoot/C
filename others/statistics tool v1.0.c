#include <stdio.h>
#include <math.h>

int main()
{
    int n,n_1,n_all;
    printf("please write down number of your statistics:");
    scanf("%d",&n_1);
    n = n_1 - 1;
    n_all = n;
    float x[n],n_yonghu;
    n_yonghu = n_1;
    for(;n>=0;n--){
        printf("please write down your NO.%d number:",n_1); 
        n_1--;
        scanf("%f",&x[n]);
    }
    int n_2;
    n++;                            //this time n=0.
    for(;n<=n_all;n++){
        n_2 = n+1;
        //printf("NO.%d number is:%f\n",n_2,x[n]);
    }                   
    n--;                            //this time n=n_all
    float sum=0.0;
    //printf("n=%d\n",n);
    //printf("n_all=%d\n",n_all);
    do{                     
        sum = sum+x[n];
        n--;
        //printf("%f\n",sum);
        //printf("n'=%d\n",n);
    }while(n<n_all && n>=0);
    n++;                            //this time n=0
    float pingjun;
    pingjun = sum/(n_all+1);
    printf("average=%.03f\n",pingjun); 

    float meigecha, chazhihe=0, meigechadepingfang, pingfanghe=0;
    for(;n<=n_all;n++){
        meigecha = x[n]-pingjun;
        //printf("meigecha=%f\n",meigecha);
        if(meigecha<0){
            meigecha = -meigecha;
        }
        meigechadepingfang = meigecha*meigecha;
        //printf("pingfang=%f\n",meigechadepingfang);
        pingfanghe = pingfanghe+meigechadepingfang;
        //printf("pingfanghe=%f\n",pingfanghe);
        chazhihe = chazhihe + meigecha;
    }
    n--;                            //this time n=n_all
    //printf("chazhihe=%f\n",chazhihe);
    float suanshupingjunpiancha, biaozhunwucha, tem, biaozhunpiancha, tem_1;
    suanshupingjunpiancha = chazhihe/n_yonghu;
    tem = pingfanghe/n_yonghu;
    biaozhunwucha = sqrt(tem);
    printf("suanshu pingjun piancha=%.03f\n",suanshupingjunpiancha);
    printf("biaozhun wucha=%.03f\n",biaozhunwucha);
    tem = pingfanghe/(n_yonghu-1);
    biaozhunpiancha = sqrt(tem);
    printf("biaozhun piancha=%.03f\n",biaozhunpiancha);

    //It is base code,under this
    //check out your code, you always forget "&"!
    system("pause");
    return 0;
}