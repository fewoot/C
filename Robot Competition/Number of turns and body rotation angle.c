#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.141592653589793238462

//�����ת��Ȧ��
//#define n 0.208333333
//���Ӱ뾶��/m��
//#define r 12
//��������֮��ľ��룬���߳�����ת��ֱ����/m��
//#define d 20
//��ת�ĽǶȣ����ȣ�
//#define a PI/2


void angleToTurn(){
    float a,d,r;
    printf("������Ƕȣ��Ƕȣ���");
    scanf("%f",&a);
    a = (PI*a)/180;
    printf("�����복����תֱ����/m��:");
    scanf("%f",&d);
    printf("���������Ӱ뾶��/m��:");
    scanf("%f",&r);
    printf("Ȧ����%f\n",((d*a)/(4*PI*r)));
    return;
}

void turnToAngle(){
    float n,d,r;
    printf("������Ȧ����");
    scanf("%f",&n);
    printf("�����복����תֱ����/m��:");
    scanf("%f",&d);
    printf("���������Ӱ뾶��/m��:");
    scanf("%f",&r);
    printf("�Ƕ���%f\n",(((4*PI*r*n)/d)*180)/PI);
    return;
}

int main()
{
    int shuru;
    printf("1.�Ƕ�תȦ��\n2.Ȧ��ת�Ƕ�\n��ѡ��");
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

