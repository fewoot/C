#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.141592653589793238462

//电机旋转的圈数
//#define n 0.208333333
//轮子半径（/m）
//#define r 12
//两个轮子之间的距离，或者车身旋转的直径（/m）
//#define d 20
//旋转的角度（弧度）
//#define a PI/2


void angleToTurn(){
    float a,d,r;
    printf("请输入角度（角度）：");
    scanf("%f",&a);
    a = (PI*a)/180;
    printf("请输入车身旋转直径（/m）:");
    scanf("%f",&d);
    printf("请输入轮子半径（/m）:");
    scanf("%f",&r);
    printf("圈数是%f\n",((d*a)/(4*PI*r)));
    return;
}

void turnToAngle(){
    float n,d,r;
    printf("请输入圈数：");
    scanf("%f",&n);
    printf("请输入车身旋转直径（/m）:");
    scanf("%f",&d);
    printf("请输入轮子半径（/m）:");
    scanf("%f",&r);
    printf("角度是%f\n",(((4*PI*r*n)/d)*180)/PI);
    return;
}

int main()
{
    int shuru;
    printf("1.角度转圈数\n2.圈数转角度\n请选择：");
    scanf("%d",&shuru);
    switch (shuru)
    {
    case 1:
        angleToTurn();
        break;
    
    default:
        turnToAngle();
        break;
    }
    //gets();
    //fflush(stdin);


    //It is base code,under this
    //check your code, you always forget "&"!
    //angleToTurn();
    
    
    system("pause");
    return 0;
}

