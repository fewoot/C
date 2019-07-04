#include <stdio.h>

double y(double x){                                                                    //y函数
    double y;
    y = (((2*x)*x)*x)-((4*x)*x)+(3*x)-6;
    return y;
}

double y_dao(double x){                                                                //导数函数
    double y;
    y = ((6*x)*x)-(8*x)+3;
    return y;
}

double root(double x,double eps){                                                      //计算函数
    double zhi=100,cha=100,mi;
    for(;zhi>=eps && cha>=eps;){
        mi = (y(x))/(y_dao(x));
        x = x-mi;
        zhi = y(x);

        if(zhi<0){
            zhi = -zhi;
        }

        if(mi<0){
            cha = -mi;
        }else{
            cha = mi;
        }


    }
    return x;
}


int main()
{
    double x,eps,jie;

    scanf("%lf",&eps);
    printf("eps=%lf",eps);

    //gets();
    //fflush(stdin);
    x = 1.5;
    printf("hanshu = %f\ndaoshu = %f\n",y(x),y_dao(x));
    jie = root(x,eps);
    printf("%f",jie);


    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}