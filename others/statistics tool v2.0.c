#include <stdio.h>
#include <math.h>

float arithmetic_mean_deviation(float *data,int n,float aver_fun){              //算术平均偏差
    // float temp=0;
    // for(int i=1;i<=n;++i){
    //     temp = temp+((data[i]-aver_fun)*(data[i]-aver_fun));
    // }
    // return (sqrt((temp/n)));
    float temp=0;
    for(int i=1;i<=n;++i){
        if((data[i]-aver_fun)>=0){
            temp = temp+(data[i]-aver_fun);
        }else{
            temp = temp+(aver_fun-data[i]);
        }
    }
    return (temp/n);
}

float arithmetic_mean(float *data,int n){                        //算术平均值
    float sum=0;
    for(int i=1;i<=n;i++){
        sum = sum+data[i];
    }
    return (sum/n);
}

float standard_error(float *data,int n,float aver_fun){                         //标准误差
    float temp=0;
    for(int i=1;i<=n;++i){
        temp = temp+((data[i]-aver_fun)*(data[i]-aver_fun));
    }
    return (sqrt((temp/n)));
}

float standard_deviation(float *data,int n,float aver_fun){                     //标准偏差
    float temp=0;
    for(int i=1;i<=n;++i){
        temp = temp+((data[i]-aver_fun)*(data[i]-aver_fun));
    }
    return (sqrt((temp/(n-1))));
}

float standard_deviation_of_arithmetic_mean(float *data,int n,float aver_fun){                     //标准偏差
    float temp=0;
    for(int i=1;i<=n;++i){
        temp = temp+((data[i]-aver_fun)*(data[i]-aver_fun));
    }
    return (sqrt(temp/((n-1)*n)));
}


int main()
{
    int geshu;
    printf("Please enter the number of data:");
    scanf("%d",&geshu);
    float shuju[geshu];
    for(int i=1;i<=geshu;i++){

        printf("Please enter the NO.%d number:",i);
        
        scanf("%f",&shuju[i]);
        //printf("%f\n",shuju[i]);
    }
    float aver;
    aver = arithmetic_mean(&shuju,geshu);                       //提取平均值
    //&shuju,geshu

    printf("          Arithmetic Mean = %.04f\n",arithmetic_mean(&shuju,geshu));
    printf("           Standard Error = %.04f\n",standard_error(&shuju,geshu,aver));
    printf("Arithmetic Mean Deviation = %.04f\n",arithmetic_mean_deviation(&shuju,geshu,aver));
    printf("       Standard Deviation = %.04f\n",standard_deviation(&shuju,geshu,aver));
    printf("    S-D-O Arithmetic Mean = %.04f\n",standard_deviation_of_arithmetic_mean(&shuju,geshu,aver));



    // gets();
    // fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}
//Arithmetic mean deviation            Arithmetic mean            Standard error            standard deviation 