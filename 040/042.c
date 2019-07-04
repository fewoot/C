#include <stdio.h>


int changdu(int shuzi){
    int cha=1,weishu=1;
    for(int i=10;cha!=0;i=(i*10)){
        cha = shuzi/i;
        weishu++;
    }
    return (weishu-1);
}

int main()
{
    int x,y,a,b;
    
    //printf("weishu=%d",changdu(123456789));

    scanf("%d%d",&x,&y);
    a = (x+y)/2;
    b = (x-y)/2;
    int changdu_a,changdu_b;

    changdu_a = changdu(a);

    changdu_b = changdu(b);

    //int changdu_a =4,a=1234;
    //int changdu_b =3,b=123;

    int yu,meige[1000],temp=1;
    for(int i=10;temp<=changdu_a;){
        yu = a%i;
        meige[temp] = yu;
        temp++;
        a = a/i;
    }
    int meige_oppsite_a[1000],temp_1=1;
    for(temp=changdu_a;temp>=1;temp--){
        meige_oppsite_a[temp_1] = meige[temp];
        temp_1++;
        //printf("yuanNO.%d=%d\n",temp,meige[temp]);
        //printf("fanNO.%d=%d\n",temp_1-1,meige_oppsite_a[(temp_1-1)]);
    }
    int shuzi_hou_a=0,chengshu=1;
    for(int i=1;i<=changdu_a;i++){
        shuzi_hou_a += meige_oppsite_a[i]*chengshu;
        chengshu = chengshu*10;
    }
    //printf("shuzi_hou_a=%d\n",shuzi_hou_a);

    changdu_a = changdu_b;
    a = b;

    //int yu,meige[1000],temp=1;
    temp = 1;
    for(int i=10;temp<=changdu_a;){
        yu = a%i;
        meige[temp] = yu;
        temp++;
        a = a/i;
    }
    //int meige_oppsite_a[1000],temp_1=1;
    temp_1 = 1;
    for(temp=changdu_a;temp>=1;temp--){
        meige_oppsite_a[temp_1] = meige[temp];
        temp_1++;
        //printf("yuanNO.%d=%d\n",temp,meige[temp]);
        //printf("fanNO.%d=%d\n",temp_1-1,meige_oppsite_a[(temp_1-1)]);
    }
    //int shuzi_hou_a=0,chengshu=1;
    int shuzi_hou_b = 0;
    chengshu = 1;
    for(int i=1;i<=changdu_a;i++){
        shuzi_hou_b += meige_oppsite_a[i]*chengshu;
        chengshu = chengshu*10;
    }
    //printf("shuzi_hou_b=%d\n",shuzi_hou_b);
    int s,t;
    s = shuzi_hou_a+shuzi_hou_b;
    t = shuzi_hou_a-shuzi_hou_b;
    printf("%d %d",s,t);


    /*int meige_oppsite_b[1000],temp_2=1;
    for(temp=changdu_b;temp>=1;temp--){
        meige_oppsite_b[temp_2] = meige[temp];
        temp_1++;
        printf("yuanNO.%d=%d\n",temp,meige[temp]);
        printf("fanNO.%d=%d\n",temp_2-1,meige_oppsite_b[(temp_2-1)]);
    }
    int shuzi_hou_b=0;
    chengshu=1;
    for(int i=1;i<=changdu_b;i++){
        shuzi_hou_b += meige_oppsite_b[i]*chengshu;
        chengshu = chengshu*10;
    }
    printf("shuzi_hou_b=%d",shuzi_hou_b);*/



    
    //return meige[];


    /*int ceshi;
    ceshi = 1234/100000;
    printf("%d",ceshi);*/

    //It is base code,under this
    //check your code, you always forget "&"!
    system("pause");
    return 0;
}